#include <stdio.h>

/**
 *main - Program entry point
 *void: return zero if succesful
 *Deccription: print the size of various types on the computer it is compiled and run on
 */

int main(void)
{
	printf("Size of a char: %ld byte(s)\n",sizeof(char));
	printf("Size of an int: %ld bytes(s)\n",sizeof(int));
	printf("Size of a long int: %ld byte(s)\n",sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n",sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n",sizeof(float));
        return (0);
}
