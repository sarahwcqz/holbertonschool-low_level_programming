#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of argmnt passed to the prgm (must be 3)
 * @argv: array containing the args
 * Return: 1 if success, -1 if failure
 */
int main(int argc, char *argv[])
{
	char *file_from, *file_to;
	int fd_from, ret_rd_from, ret_close_from;	/*file_from */
	int fd_to, ret_wr_to, ret_close_to;			/* file_to*/
	char *buff[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

/* ----------------------file_from------------------------- */

	fd_from = open(file_from, O_RDONLY);

	ret_rd_from = read(fd_from, /*buff? , taille de file_from?*/);
	if (ret_rd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		/* close ret_rd_from ? */
		exit (98);
	}

	ret_close_from = close(ret_rd_from);
	if (ret_close_from == -1)
	{
		dprintf("Error: Can't close fd %d\n", ret_close_from);
		exit (100);
	}

/* -------------------------file_to------------------------- */

	fd_to = open(file_to, O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	ret_wr_to = write(fd_to, /* buuf?, sizeof file_from?*/ );
	if (ret_wr_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	ret_close_to = close(fd_to);
	if (ret_close_to == -1)
	{
		dprintf("Error: Can't close fd %d\n", ret_close_to);
		exit (100);
	}

	return (1);
}