#include "holberton.h"
#include "string.h"
/**
 * main - The entry point
 *
 * Return: Always 0 (Success)
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
