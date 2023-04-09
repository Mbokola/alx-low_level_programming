/**
 *get_endianness - gets whether little/big endian
 *
 *Return: 0 if big endian 1 if otherwise
 */
int get_endianness(void)
{
	int test = 0x6b2d;
	int j = sizeof(int) * 8;
	int store;

	store = test << (j - 8);
	if ((test >> 8) > (store >> (j - 8)))
		return (1);
	return (0);
}
