#include "main.h"
#include <ctype.h>
/**
  * _isalpha - checks if c is a letter
  * @c: to be checked
  * Return: 1 if True 0 if False
  */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
