#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int n = 0;
  printf("enter number:");
  scanf("%d", &n);
  if(n>0)
    {
      printf("%d is positive\n",n);
    }
  else if(n<0)
    {
      printf("%d is negative\n",n);
    }
  else
    {
      printf("%d is negative\n",n);
    }
  return (0);
}
