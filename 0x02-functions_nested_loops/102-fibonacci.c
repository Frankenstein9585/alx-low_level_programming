#include <stdio.h>
/**
  * main - fibonacci
  *
  * Return: 1
  */
int main(void)
{
long int i = 1;
long int j = 2;
long int next = 0;

printf("%lu, %lu, ", i, j);
for (int k = 0; k < 47; k++)
{
next = i + j;
printf("%lu", next);
if (k < 46)
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
}