#include "main.h"
/**
 * times_table - Prints the 9 times table
 * Return: no return
 */
void times_table(void)
{
int c, l, ok;
for (c = 0; c <= 9; c++)
{
_putchar(48);
for (l = 1; l <= 9; l++)
{
ok = c * l;
_putchar(44);
_putchar(32);
if (ok <= 9)
{
_putchar(32);
_putchar(ok + 48);
}
else
{
_putchar((ok / 10) + 48);
_putchar((ok % 10) + 48);
}
}
_putchar('\n');
}
}
