#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of argmnt passed to the prgm (must be 3)
 * @argv: array containing the args
 * Return: 0 if success, -1 if failure
 */
int main(int argc, char *argv[])
{
	char *file_from, *file_to;
	int fd_from, rd_bytes, ret_close_from;		/*file_from */
	int fd_to, wr_bytes, ret_close_to;			/* file_to*/
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];



	fd_from = open(file_from, O_RDONLY);								/* open from */
	if (fd_from == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", file_from);
        exit(98);
    }

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);			/* open to */
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	 
	while ((rd_bytes = read(fd_from, buffer, 1024)) > 0)
	{
			wr_bytes = write(fd_to, buffer, rd_bytes);
			if ((wr_bytes != rd_bytes) || (wr_bytes == -1))		/* err wr to*/
			{
				dprintf(2, "Error: Can't write to %s\n", file_to);
				close(fd_from);
				close(fd_to);
				exit(99);
			}
	}
			if (rd_bytes == -1)				/* err read from */
		{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		close(fd_from);
		exit (98);	
		}

	ret_close_from = close(fd_from);									/* close from */
	if (ret_close_from == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", fd_from);
		exit (100);
	}


	ret_close_to = close(fd_to);										/* close to */
	if (ret_close_to == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", fd_to);
		exit (100);
	}

	return (0);
}
