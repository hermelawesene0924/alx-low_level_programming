#include <stdio.h>
/**
 * main - computes and print the sum of all the multiples of 3 and 5
 * 3 0r 5 below 1024
 * Return: Nothing
 */
int main(void)
{
int i, sum;
for (i = 0; i < 1024; i++)
if (i % 3 == 0 || i % 5 == 0)
sum += i;
printf("%d\n", sum);
return (0);
}
