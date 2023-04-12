#include "main.h"

/**
 *main - program entry point
 *@ac: number of arguments
 *@av: arguments passed
 *
 *Return: 0 if succesful
 */
int main(int ac, char **av)
{
	int fd, fd1, read_in;
	char *buffer = malloc(sizeof(char *) * 1024);

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd1 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((read_in = read(fd, buffer, 1024)) > 0)
		write(fd1, buffer, read_in);
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd");
		exit(100);
	}
	if (close(fd1) < 0)
	{
	        dprintf(STDERR_FILENO, "Error: Can't close fd");
	        exit(100);
	}
	return (0);
}
