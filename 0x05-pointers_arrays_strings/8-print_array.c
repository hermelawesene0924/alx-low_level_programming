#include "holberton.h"
#include <stdio.h>
/**
 * print_array - to print integer no of array
 * @a: int
 *@n:int
 * Return: void
 */
void print_array(int *a, int n)
{
int i = 0;
for (; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
{
printf(", ");
}
}
printf("\n");
}
