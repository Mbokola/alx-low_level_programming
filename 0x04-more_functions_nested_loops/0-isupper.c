/**
 * _isupper - check whether char is uppercase
 *@c: integer parameter
 * Return: 1 if uppercase, 0 if lowercase
 */

int _isupper(int c)
{
	char r = c;

	if (r >= 'A' && r <= 'Z')
		return (1);
	else
		return (0);
}
