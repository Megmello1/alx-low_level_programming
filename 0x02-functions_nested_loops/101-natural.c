#include <stdio.h>
/**
 * main - Prints natural numbers below 1024 that are
 * multiplies of 3 or 5
 * Return: Always 0.
 */
int main(void)
{
int p, t;
for (p = 1; p < 1024; p++)
{
if ((p % 3) == 0 || (p % 5) == 0)
t += p;
}
printf("%d\n", t);
return (0);
}
