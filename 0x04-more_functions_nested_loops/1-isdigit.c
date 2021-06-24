#include "holberton.h"
/**
 * _isdigit - check for digit
 * @c: parameter
 * Return: value
 */
int _isdigit(int c)
{
if(c >= 0 && c <= 9)
return (1);
else
return (0);
}
