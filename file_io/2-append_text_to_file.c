#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to add at the end of the file
 * Return: 1 on success, -1 if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, retW;
	int len = 0;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

/* get the length of the string */
	while (text_content[len] != '\0')
		len++;

	if (text_content == NULL)
	{
		close(fd);
		return (-1);
	}

	retW = write(fd, text_content, len);
	if (retW == -1)
	{
		close(fd);
		return (-1);
	}


	close(fd);
	return (1);
}
