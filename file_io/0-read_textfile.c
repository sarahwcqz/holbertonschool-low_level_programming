#include "main.h"

/**
 * read_textfile - reads a txt file and print to the stout
 * @filename: the txt file to read
 * @letters: the number of element to read and print
 * Return: the number of element read and wrote, -1 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf = malloc(sizeof(char) * letters);
	int retR, retW, fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	retR = read(fd, buf, letters);
	if (retR == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	retW = write(1, buf, retR);
	if (retW == -1 || retW != retR)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);

	return (retW);
}
