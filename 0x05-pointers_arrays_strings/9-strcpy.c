#include "holberton.h"
/**
 * *_strcpy - to copy string
 * @dest: param
 * @src: parametr
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int n = -1;
do {
n++;
dest[n] = src[n];
} while (src[n] != '\n');
return (dest);
}
