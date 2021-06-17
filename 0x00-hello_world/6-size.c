#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int intType;
float floatType;
long int longInt;
char charType;
long long int llInt;
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longInt));
printf("Size of a lon long int: %zu byte(s)\n", sizeof(llInt));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}

