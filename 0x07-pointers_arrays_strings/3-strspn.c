#include "main.h"


/**
 * _strspn - Entry point
 * @s: Input
 * @accept: Input
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, value, k;

	value = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		k = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				value++;
				k = 1;
			}
		}
