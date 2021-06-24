#include "holberton.h"
#include <stdio.h>
/**
 * print_most_numbers - print numbers without 2 and 4
 *
 * Return: always 0
 */
void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i != 2 && i != 4)
{
_putchar(i + '0');
}
}
_putchar('\n');
}
