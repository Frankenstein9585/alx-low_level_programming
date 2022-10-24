#include "main.h"
#include <string.h>
/**
  * print_rev - prints string in reverse order
  *
  * @s: string to be printed in reverse order
  */
void print_rev(char *s)
{
	int i = strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
