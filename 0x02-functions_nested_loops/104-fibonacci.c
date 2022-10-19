#include <stdio.h>
/**
  *main - prints 98 fibonacci numbers
  *
  * Return: 0
  */
int main(void)
{
long int i = 1;
long int j = 2;
long int next = 0;
int k;

printf("%lu, %lu, ", i, j);
for (k = 0; k < 96; k++)
{
next = i + j;
printf("%lu", next);
if (k < 95)
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
}
i = j;
j = next;
}
return (0);
}
