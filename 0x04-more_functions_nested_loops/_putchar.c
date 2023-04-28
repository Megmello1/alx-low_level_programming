#include "main.h"
#include <stdio.h>

/**
 * _putchar - write character c to stdout
 * @c: character to print
 * Return: on success 1
 * On error, -1 is returned, and error is set appropiately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
