#include "main.h"
/**
  * leet - encodes a string
  *
  * @s: string to be changed
  * Return: s
  */
char *leet(char *s)
{
	int i = 0;
	int j;
	char encode[10] = {'A', 'a', 'E', 'e', 'o', 'O', 'T', 't', 'l', 'L'};
	char decode[5] = {'4', '3', '0', '7', '1'};

	while (s[i] != '\0')
	{
		for (j = 0; j < 10; ++j)
		{
			if (s[i] == encode[j])
			{
				s[i] = decode[j / 2];
			}
		}
		i++;
	}
	return (s);
}

