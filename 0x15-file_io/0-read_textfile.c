#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * @filename: name of the file to rread andwrite
 * @letters: No. of letters to be written and read
 * Return: No. of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int k;
	ssize_t lr, lw;
	char *buffer;

	if (filename == NULL)
		return (0);
	k = open(filename, O_RDONLY);
	if (k == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(k);
		return (0);
	}
	lr = read(k, buffer, letters);
	close(k);
	if (lr == -1)
		free(buffer);
	lw = write(1, buffer, lr);
	free(buffer);
	if (lr != lw)
		return (0);
	return (lw);
}
