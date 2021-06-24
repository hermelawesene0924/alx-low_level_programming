#include "holberton.h"
/**
 * _isupper - check for uppercase
 *@c: is a parameter
 * Return: Success
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
