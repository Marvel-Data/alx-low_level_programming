#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of a file
 * @text_content: contents for the file
 *
 * Return: integer
 */
int create_file(const char *filename, char *text_content)
{
	int file, txt = 1;
	ssize_t bytes = 0;
	size_t lnth = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		lnth = strlen(text_content);
		bytes = write(file, text_content, lnth);
		if (bytes != (ssize_t) lnth)
			txt = -1;
	}
	close(file);
	return (txt);
}
