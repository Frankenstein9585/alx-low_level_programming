#include <stdio.h>
/**
  * main - prints the sum of fibonacci numbers less than 4M
  *
  * Return: 0
  */
int main(void)
{
long int i = 1;
long int j = 2;
long int next = 0;
long int sum = 2;
while (next < 4000000)
{
next = i + j;
if (next % 2 == 0)
{
sum += next;
}
i = j;
j = next;
}
printf("%lu\n", sum);
return (0);
}
