#include "main.h"
/**
 *append_text_to_file - creates a file
 *@filename: file of interest
 *@text_content: contents to write into @filename
 *
 *Return: -1 if fail 1 if success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (!filename)
		return (-1);
	if (!text_content)
		return (1);
	fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
	while (*(text_content + i))
		i++;
	write(fd, text_content, i);
	return (1);
}
