#include "main.h"
#include <string.h>
/**
  * main - prints _putchar
  *
  * Return: 0 on success
  */
int main(void)
{
	char *string = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
	return (0);
}
