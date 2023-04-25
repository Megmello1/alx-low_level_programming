#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alpha in lowercase on a new line.
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int mine;
char me;
for (mine = 0; mine <= 9; mine++)
{
for (me = 'a'; me <= 'z'; me++)
_putchar(me);
_putchar('\n');
}
}
