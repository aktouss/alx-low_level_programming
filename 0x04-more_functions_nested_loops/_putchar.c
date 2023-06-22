#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the caracter c stdout
 *@c: The caracter to print
 * Return: on success 1, and on erreur -1
 */

int _putchar(char c)
{

	return (write(1, &c, 1));

}
