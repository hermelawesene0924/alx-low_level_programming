#include "holberton.h"
/**
 * rev_string - to reverse the string
 * @s: pointer to char data type
 */
void rev_string(char *s)
{
int a, b, c;
char k;
for (a = 0; s[a] != '\0'; a++)
b = 0;
c = a / 2;
while (c--)
{
k = s[a - b - 1];
s[a - b - 1] = s[b];
s[b] = k;
b++;
}
}
