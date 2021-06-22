#include "holberton.h"
/**
 * main - printing holberton
 * Return: Always 0 (success)
 */
int main(void)
{
char a[9] = "Holberton";
int i;
for (i = 0; i <= 8; i++)
{
_putchar(a[i]);
}
_putchar('\n');
return (0);
}
