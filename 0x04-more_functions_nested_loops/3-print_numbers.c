#include "main.h"
/**
  * print_numbers - prints 0 to 9
  * Return: 0 if false, 1 if true
  */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
