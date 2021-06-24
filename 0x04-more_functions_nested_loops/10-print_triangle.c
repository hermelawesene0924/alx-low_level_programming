#include "holberton.h"
#include <stdio.h>
/**
 * print_triangle - printing triangle with respect to the integer
 * @size: parameter
 * Return: void
 */
void print_triangle(int size)
{
int i;
int k;
int n;
for (i = 0; i < size; i++)
{
for (n = size - 1 - i; n > 0; n--)
{
_putchar(' ');
}
for (k = 0; k <= i; k++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
