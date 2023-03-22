#include "function_pointers.h"

/**
 *print_name - print name of person
 *@name: name of person
 *@f: function pointer
 *
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if(name && f)
		f(name);
}
