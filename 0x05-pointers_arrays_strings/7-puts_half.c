#include "main.h"
#include <string.h>
/**
  * puts_half - prints every other character of a string
  *
  * @str: string to be operated on
  */
void puts_half(char *str)
{
	int n = strlen(str) - 1;
	int i;

	if (n % 2 == 0)
	{
		i = n / 2 + 1;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		i = (n - 1) / 2 + 2;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
