#include <stdio.h>
#include <string.h>
/**
  * _strncat - concatenates two strings
  * @dest: input string
  * @src: input string
  * @n: number of characters from src string
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int a = strlen(dest);
	int b = 0;

	while (b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}

