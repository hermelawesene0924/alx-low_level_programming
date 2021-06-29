#include "holberton.h"
/**
 * _puts - to print string
 * @str: to point char data type
 * Return: 0
 */
void _puts(char *str)
{
int n = 0;
while (str[n])
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}
