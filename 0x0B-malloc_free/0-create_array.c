#include "main.h"
/**
  * create_array - creates an array of chars and
  * initializes it with a specific char.
  *
  * @size: size of the array
  * @c: char for initialization
  *
  * Return: char array or NULL if size = 0
  */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	char *ar;

	ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);
	*ar = c;
	return (ar);
}

