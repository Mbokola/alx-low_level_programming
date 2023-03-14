#include <stdlib.h>
/**
 *alloc_grid - create 2 dimensional array of @height * @width
 *@height: Number of rows
 *@width: Number of colums
 *Return: 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **s;
	int i, j;

	if (!(width && height))
		return (0);
	s = malloc(sizeof(int *) * height);
	if (!s)
	{
		free(s);
		return (0);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(sizeof(int) * width);
		if (!s[i])
		{
			free(s[i]);
			return (0);
		}
		for (j = 0; j < width; j++)
			s[i][j] = 0;
	}
	return (s);
}
