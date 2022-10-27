#include "main.h"
/**
  * cap_string - changes a lowercase string to uppercase
  *
  * @s: string to be changed
  * Return: s
  */
char *cap_string(char *s)
{
	int i = 1;
	int j;
	char separator[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	while (s[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i - 1] == separator[j])
			{
				s[i] -= 32;
			}
		}
		i++;
	}
	return (s);
}
