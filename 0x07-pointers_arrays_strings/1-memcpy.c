#include "main.h"
/**
  * _memcpy - copies n bytes from the memory
  * area src to memory area dest
  *
  * @dest: string
  * @src: string
  * @n: bytes
  * Return: dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
