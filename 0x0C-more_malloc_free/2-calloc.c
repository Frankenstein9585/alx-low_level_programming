#include "main.h"
/**
  * _calloc - allocates memory for an array
  *
  * @nmemb: number of array elements
  * @size: size of each array element
  *
  * Return: Pointer to the allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	
	return calloc(nmemb, size);
}
