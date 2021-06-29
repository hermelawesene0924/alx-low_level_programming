#include "holberton.h"
/**
 * swap_int - to swap a numbers
 * @a: is integer
 * @b: is integer
 */
void swap_int(int *a, int *b)
{
int n;
n = *a;
*a = *b;
*b = n;
}
