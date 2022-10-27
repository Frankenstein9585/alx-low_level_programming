#include "main.h"
/**
  * _strncpy - concatenates two strings
  * @dest: input string
  * @src: input string
  * @n: characters to be copied from src
  * Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}

