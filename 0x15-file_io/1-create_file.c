#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: file to be created
 * @text_content: content of the file
 *
 * Return: void
 */
int create_file(const char *filename, char *text_content)
{
	int k, l, rwr;

	if (filename == NULL)
		return (-1);
	k = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (k == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (l = 0; text_content[l]; l++)
		;
	rwr = write(k, text_content, l);
	if (rwr == -1)
		return (-1);
	close(k);
	return (1);
}
