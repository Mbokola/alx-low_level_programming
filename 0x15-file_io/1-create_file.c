#include "main.h"
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	char c;

	if (!filename)
		return (1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	while (text_content[i])
	{
		c = text_content[i];
		write(fd, &c, sizeof(char));
		i++;
	}
	close(fd);
	return (1);
}
