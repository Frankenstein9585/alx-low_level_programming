#include "main.h"
/**
  * times_table - prints the 9 times table
  *
  * Return: Nothing
  */
void times_table(void)
{
	int i, j, prod;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			prod = i * j;
			if (prod <= 9)
			{
				_putchar(prod + 48);
			}
			else
			{
				_putchar(prod / 10 + 48);
				_putchar(prod % 10 + 48);
			}
			if (j == 9)
				_putchar('\n');
			else
			{
				_putchar(',');
				if (prod <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
				}
			}
		}
	}
}
