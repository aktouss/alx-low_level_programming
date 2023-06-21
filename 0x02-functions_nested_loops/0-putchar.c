#include <unistd.h>


/**
 * _putchar - write the caracter c
 * @c: caracter to print
 * Return: success 1.
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
