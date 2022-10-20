#include "main.h"
#include <ctype.h>
/**
  * _isupper - checks for uppercase character
  * @c: to be checked
  * Return: 0 if false, 1 if true
  */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
