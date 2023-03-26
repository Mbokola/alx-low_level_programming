/**
 *print_strings - prints a string
 *@separator: separator
 *@n: number of arguments
 *
 *Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = n; i; i--)
	{
		str = va_arg(args, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i != 1)
		{
			printf("%s", separator);
		}

	}
	va_end(args);
	printf("\n");
}
