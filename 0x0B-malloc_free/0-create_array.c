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
	char *ar;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}

