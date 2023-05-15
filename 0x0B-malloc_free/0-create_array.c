#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates an array of size and assign char c
 * it with a specific char.
 * @c: char to initialize
 * @size: size of array
 * Return: a pointer to the array, null if it fails
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;
if (size == 0 || str == NULL)
return (NULL);
for (i = 0; i < size; i++)
str[i] = c;
return (str);
}
