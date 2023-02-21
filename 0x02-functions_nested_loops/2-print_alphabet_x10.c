#include "main.h"
/**
 *print_alphabet_x10: a -z 10 times
 */

void print_alphabet_x10(void)
{
	int i = 97;
	int times = 0;

	while (times <= 10)
	{
		i = 97;
		while (i <= 122)
		{
			_putchar(i);
			i++;

		}
		times++;
		_putchar('\n');
	}
}
