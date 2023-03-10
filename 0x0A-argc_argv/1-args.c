#include <stdio.h>
/**
 *main - program entry
 *@argc: argument count
 *@argv: argument vector
 *Return: o if succesful
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
