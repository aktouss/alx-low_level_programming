#include <unistd.h>

/**
     * _putchar - Write a function that fills memory with a constant byte
     *@c: The number to print
     * Return: On success 1.
     * On error, -1 is returned, and errno is set appropriately
     */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
