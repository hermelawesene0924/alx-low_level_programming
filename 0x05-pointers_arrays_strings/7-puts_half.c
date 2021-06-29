#include "holberton.h"
/**
 * puts_half - to print char of string
 *@str: pointer to char data type
 * Return: void
 */
void puts_half(char *str)
{
int n;
for (n = 0; str[n] != '\0'; n++)
n++;
for (n /= 2; str[n] != '\0'; n++)
{
_putchar(str[n]);
}
_putchar('\n');
}
