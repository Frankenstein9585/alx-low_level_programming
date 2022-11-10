#include "main.h"
#include <string.h>
/**
  * string_nconcat - concatenates two strings
  * @s1: first string
  * @s2: second string
  * Return: concatenated string or NULL if error
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0;
	unsigned int j = 0;
	int size1 = (int) strlen(s1);
	int size2 = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ptr = malloc(size1 + size2 + 1);

	while (*s1)
		ptr[i++] = *s1++;


	if (n >= (unsigned int) strlen(s2))
	{
		while (*s2)
			ptr[i++] = *s2++;
	}

	else
	{
		for (j = 0; j < n; ++j)
		{
			ptr[i++] = *s2++;
		}
	}

	ptr[i] = '\0';
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
