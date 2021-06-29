#include "holberton.h"
/**
 * puts2 - to print character of strings
 * @str: pointer to char data type
 * Return: always 0
 */
void puts2(char *str)
{
int n = 0;
while (str[n] != '\0')
{
if (n % 2 == 0)
_putchar(str[n]);
n++;
}
_putchar('\n');
}
