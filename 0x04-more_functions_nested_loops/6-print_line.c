#include "holberton.h"
#include <stdio.h>
/**
 * print_line - print line with the num of integers
 * @n: num of _ used in character
 * Return: void
 */
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
