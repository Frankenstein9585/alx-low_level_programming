#include "main.h"
#include <string.h>
/**
  * rev_string - prints string in reverse order
  *
  * @s: string to be printed in reverse order
  */
void rev_string(char *s)
{
	int i = strlen(s) - 1;

	printf("%s\n", s);
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
