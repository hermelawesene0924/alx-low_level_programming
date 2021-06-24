#include "holberton.h"
/**
 * _isdigit - check for digit
 * @c: int representing an ascii character
 * Return: value
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
