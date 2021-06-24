#include "holberton.h"
#include <stdio.h>
/**
 * more_numbers - print 10 times
 *
 * Return: Void.
 */
void more_numbers(void)
{
int i, n;
for (n = 0; n < 10; n++)
{
i = 0;
while (i <= 14)
{
if (i >= 10)
{
_putchar(i / 10 + '0');
}
_putchar(i % 10 + '0');
i++;
}
_putchar('\n');
}
}
