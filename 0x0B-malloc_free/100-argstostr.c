#include "main.h"
#include <string.h>
/**
  * argstostr - concatenates the arguments of the program into one string
  *
  * @ac: number of arguments
  * @av: array of arguments
  *
  * Return: concatenated string or NULL in case of error
  */

char *argstostr(int ac, char **av)
{
	char *ar;
	int i;
	int j;
	int k = 0;
	int size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; ++i)
	{
		size++;
		for (j = 0; j < (int) strlen(av[i]); ++j)
		{
			size++;
		}
	}

	ar = malloc(size * sizeof(char));

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < (int) strlen(av[i]); j++)
		{
			ar[k] = av[i][j];
			k++;
		}
		ar[k] = '\n';
		k++;
	}

	if (ar == NULL)
		return (NULL);
	return (ar);
}
