#include "holberton.h"
/**
 * more_numbers - print 10 times
 *
 * Return: Always 0
 */
void more_numbers(void)
{
int i, n;
for (n = 0; n < 10; n++)
{
for (i = 0; i <= 14; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
