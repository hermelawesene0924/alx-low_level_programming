#include "holberton.h"
#include <stdio.h>
/**
 * print_diagonal - printing diagonal
 * @n: integer to determine the number of character
 * Return: void
 */
void print_diagonal(int n)
{
int i, k;
for (i = 0; i < n; i++)
{
for (k = 0; k < i; k++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
if (n <= 0)
{
_putchar('\n');
}
}
