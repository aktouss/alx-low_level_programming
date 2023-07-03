#include "main.h"

/**
 * _memset - check the code
 *@s: Pointed destination
 *@n: Bytes
 *@b: constant
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
