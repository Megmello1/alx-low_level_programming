#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c: character
 * Return: if letter of lowercase is 1 and 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
