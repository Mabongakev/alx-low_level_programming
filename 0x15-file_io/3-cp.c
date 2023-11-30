#include "main.h"
void check_stat(int stat, int k, char *filename, char mode);
/**
 * main - a function that copies files
 * @argc: argument count
 * @argv: argument vector
 * Return: void
 */
int main(int argc, char *argv[])
{
	int src, dst, _read = 1024, wrote, close_src, close_dst;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	check_stat(src, -1, argv[1], '0');
	dst = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_stat(dst, -1, argv[2], 'W');
	while (_read == 1024)
	{
		_read = read(src, buffer, sizeof(buffer));
		if (_read == -1)
			check_stat(-1, -1, argv[1], '0');
		wrote = write(dst, buffer, _read);
		if (wrote == -1)
			check_stat(-1, -1, argv[2], 'W');
	}
	close_src = close(src);
	check_stat(close_src, src, NULL, 'C');
	close_dst = close(dst);
	check_stat(close_dst, dst, NULL, 'C');
	return (0);
}
/**
 * check_stat - a function that checks if a file can be opened or closed
 * @stat: description of the file to be opened
 * @filename: name of the file
 * @mode: close or open
 * @k: file descriptor
 * Return: void
 */
void check_stat(int stat, int k, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(2, "Error: Can't close k %d\n", k);
		exit(100);
	}
	else if (mode == '0' && stat == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
	}
}
