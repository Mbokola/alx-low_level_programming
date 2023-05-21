#include <stdio.h>
int main(void)
{
	int mul, i = 999;
	int largest = 0, store = 0, palind = 0, tmp = 0, store1 = 0, store2 = 0;

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
				if (palind > largest)
				{
					largest = palind;
					store1 = tmp;
					store2 = i;
				}

			}
			palind = 0;
			tmp--;
		  }
		i--;
	}
	printf("The largest palindrome made from the product of two 3-digit numbers \
is %d = %d × %d\n", largest, store1, store2);
	return(0);
}
