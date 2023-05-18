#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
int *ma;
int i;
if (min > max)
return (NULL);
ma = malloc(sizeof(*ma) * ((max - min) + 1));
if (ma == NULL)
return (NULL);
for (i = 0; min <= max; i++, min++)
ma[i] = min;
return (ma);
}
