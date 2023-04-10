#include "main.h"

/**
 *read_textfile - reads passed text file
 *@filename: A text file
 *@letters: Number of letters to print
 *
 *Return: Number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, store;
	size_t count = 0;
	char c;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	while ((store = read(fd, &c, sizeof(c))) > 0)
	{
		if (count == letters)
			break;
		if (store == -1)
			return (0);
		if (store < 0)
			break;
		store = write(STDOUT_FILENO, &c, sizeof(c));
		if (store == -1)
			return (4);
		if (store == 0)
			break;
		count++;
	}
	close(fd);
	return (count);
}
