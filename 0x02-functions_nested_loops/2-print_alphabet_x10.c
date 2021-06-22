#include "holberton.h"
/**
 * print_alphabet_x10 - print entire alphabet on 10 lines
 *
 * Return: Void.
 */
void print_alphabet_x10(void)
{
int i;
char c;
for (i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
