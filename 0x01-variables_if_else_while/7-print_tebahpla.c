#include <stdio.h>
/**
 *main - program entry point
 *void:  no parameter
 *Program to reverse lowercase letters
 *Return: zero if succcesful
 */

int main()
{
	for(char i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
