#include "main.h"
/**
  * _strstr - locates the first occurrence of the substring neddle
  * in the string haystack
  *
  *
  * @needle: string
  * @haystack: another string
  * Return: a pointer to the beginning of the located substring
  */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
