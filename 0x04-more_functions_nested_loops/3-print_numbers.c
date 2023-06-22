#include "main.h"

/**
 * print_numbers -  prints the numbers, from 0 to 9
 * Return: Result 0 to 9.
 */

void print_numbers(void)
{
	int lw;

	for (lw = 0; lw <= 9; lw++)
	{
	_putchar(lw + '0');
	}
	_putchar('\n');
}
