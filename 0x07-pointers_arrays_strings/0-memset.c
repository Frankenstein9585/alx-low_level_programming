#include "main.h"
/**
  * _memset - Fills the first n bytes of the memory
  * area pointed to by s with constant byte b
  *
  * @s: string
  * @b: constant byte
  * @n: first n bytes
  * Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
