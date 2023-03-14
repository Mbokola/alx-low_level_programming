#include <stdlib.h>
/**
 *str_concat - concactecate @s1 & @s2
 *@s1: pointer to first string
 *@s2: pointer to second string
 *Return: Array of charcters
 */
char *str_concat(char *s1, char *s2)
{
	int len, i = 0, a = 0;
	char *s;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (*(s1 + i++))
		;
	while (*(s2 + a++))
		;
	len = (a + i) - 1;
	s = malloc(sizeof(char) * len);
	if (s == 0)
		return (0);
	for (i = 0; s1[i] || a; i++)
	{
		if (s1[i])
			s[i] = s1[i];
		else
			i--;
		if (a)
		{
			s[--len] = s2[a - 1];
			a--;
		}
	}
	return (s);
}
