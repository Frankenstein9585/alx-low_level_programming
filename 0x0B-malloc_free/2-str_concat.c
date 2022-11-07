#include "main.h"
#include <string.h>
/**
  * str_concat - concatenates two strings
  * @s1: first string
  * @s2: second string
  * Return: concatenated string or NULL if error
  */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0;
	int size1 = (int) strlen(s1);
	int size2 = (int) strlen(s2);

	ptr = malloc(size1 + size2 + 1);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*s1)
		ptr[i++] = *s1++;
	while (*s2)
		ptr[i++] = *s2++;

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
