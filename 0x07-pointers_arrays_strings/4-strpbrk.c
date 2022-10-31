#include "main.h"
/**
  * _strpbrk - locates the first occurrence in the string s of any bytes
  * in the string accept
  *
  *
  * @s: stringt
  * @accept: another string
  * Return: s
  */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
