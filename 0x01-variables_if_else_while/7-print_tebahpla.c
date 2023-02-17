#include <stdio.h>
/**
 *main - program entry point
 *void:  no parameter
 *Program to reverse lowercase letters
 *Return: zero if succcesful
 */

int main()
{
	char i = 'z';

	for(; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
