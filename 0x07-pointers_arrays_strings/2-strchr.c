#include "main.h"
/**
  * _strchr - returns a pointer to the first occurrence of the
  * character c in the string s, or NULL if the character is not
  * found
  *
  * @s: string
  * @c: character
  * Return: c
  */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
