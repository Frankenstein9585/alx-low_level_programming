#include "main.h"
#include <ctype.h>
/**
  * _isdigit - checks for uppercase digit
  * @c: to be checked
  * Return: 0 if false, 1 if true
  */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
