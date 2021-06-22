#include "holberton.h"
#include "string.h"
/**
 * print_alphabet - print entire alphabet
 *
 * Return: Void.
 */
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
