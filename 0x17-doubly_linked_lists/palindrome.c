#include <stdio.h>
int main(void)
{
	int mul, i = 999;
	int store = 0, palind = 0, tmp = 0;

	while (i != 100)
	{
		tmp = i;
		while (tmp != 100)
		{
			mul = tmp * i;
			store = mul;
			while (store)
			{
				palind = (palind * 10) + store % 10;
				store /= 10;
			}
			if (palind == mul)
			{
				printf("The largest palindrome made from the product of two 3-digit numbers \
is %d = %d × %d\n", mul, tmp, i);
				return (0);
			}
			palind = 0;
			tmp--;
		}
		i--;
	}
	printf("No number forms a palindrome\n");
	return(0);
}
