#include <stdio.h>
#include <string.h>
/**
  * _strcat - concatenates two strings
  * @dest: input string
  * @src: input string
  * Return: dest
  */
char *_strcat(char *dest, char *src)
{
	int a = strlen(dest);
	int b = 0;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}

