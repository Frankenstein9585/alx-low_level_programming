#include "main.h"
#include <ctype.h>
/**
  * _islower - checks if the given character is in lower case
  * @c: character to be checked
  * Return: 1 if True 0 if False
  */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
