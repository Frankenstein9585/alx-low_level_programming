#include "main.h"
#include <string.h>
/**
  * _strdup - returns a pointer to the duplicate of the string
  * @str: string
  * Return: pointer if successful else NULL
  */
char *_strdup(char *str)
{
	char *ptr;
	int i;

	if (str == NULL)
		return (NULL);

	ptr = malloc(strlen(str) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (int) strlen(str); i++)
		ptr[i] = str[i];

	return (ptr);
}
