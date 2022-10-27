#include "main.h"
/**
  * _strncpy - copies a string into antoher
  * @dest: input string
  * @src: input string
  * @n: characters to be copied from src
  * Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[i] != '\0')
	{
		dest[a] = src[a];
		a++;
	}

	a = a;
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}

