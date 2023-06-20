#include <stdio.h>

/**
  *main - When I was having that alphabet soup
  *Return: always (success)
  */

int main(void)
{
	char lw, e, q;

	e = 'e';
	q = 'q';

	for (lw = 'a'; lw <= 'z'; lw++)
	{
	if (lw != e && lw != q)
	putchar(lw);
	}
	putchar('\n');
	return (0);
}
