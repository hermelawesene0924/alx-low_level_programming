#include <stdio.h>
#include "holberton.h"
/**
 * print_square - printing square with the num of integer
 * @n: integer to print character
 * Return: void
 */
void print_square(int n)
{
int i, k;
for (i = 0; i < n; i++)
{
for (k = 0; k < n; k++)
{
_putchar('#');
}
_putchar('\n');
}
if (n <= 0)
{
_putchar('\n');
}
}
