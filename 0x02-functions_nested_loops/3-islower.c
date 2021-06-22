#include "holberton.h"
/**
 * _islower - func
 *
 * @c: is a parameter
 *
 * Return: SUccess
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
