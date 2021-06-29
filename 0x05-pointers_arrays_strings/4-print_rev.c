#include "holberton.h"
/**
 * print_rev - to print string in reverse
 * @s: pointer to char data type
 * return: always 0
 */
void print_rev(char *s)
{
int n = 0;
while (s[n])
n++;
while (n--)
_putchar(s[n]);
_putchar('\n');
}
