#include "main.h"

/**
 * append_text_to_file - to append on a file
 * @filename: name of the file
 * @text_content: content to be added
 * Return: 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int k, lr, rwr;

	if (!filename)
		return (-1);
	k = open(filename, O_WRONLY | O_APPEND);
	if (k == -1)
		return (-1);
	if (text_content)
	{
		for (lr = 0; text_content[lr]; lr++)
			;
		rwr = write(k, text_content, lr);
		if (rwr == -1)
			return (-1);

	}
	close(k);
	return (1);
}
