#include <stdio.h>

/**
     *main - alphABET
     *Return: always (success)
     *
    */

int main(void)
{
	char lw;

	for (lw = 'a'; lw <= 'z'; lw++)
	putchar(lw);

	for (lw = 'A'; lw <= 'Z'; lw++)
	putchar(lw);
	putchar('\n');
	return (0);
}
