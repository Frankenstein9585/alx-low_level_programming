#include "main.h"
/**
  * _strspn - returns the number of bytes in the initial segement of s
  * which consist only of bytes from accept
  *
  *
  * @s: string
  * @accept: another string
  * Return: s
  */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
