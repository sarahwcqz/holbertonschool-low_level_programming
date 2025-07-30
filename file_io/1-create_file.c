#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: string to write in the file
 * Return: 1 on success, -1 if failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, retW;
	int len = 0;

	while (text_content[len] != '\0')
		len++;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (text_content != NULL)
	{
	retW = write(fd, text_content, len);
	if (retW == -1)
	{
		close(fd);
		return (-1);
	}
	}

	close(fd);
	return (1);
}
