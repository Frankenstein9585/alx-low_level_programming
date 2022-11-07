#include "main.h"
/**
  * _strdup - returns a pointer to the duplicate of the string
  * @str: string
  * Return: pointer if successful else NULL
  */
char *_strdup(char *str)
{
	char *ptr;

	if (str == NULL)
		return (NULL);
	ptr = malloc(strlen(str));
	*ptr = *str;
	return (ptr);
}
