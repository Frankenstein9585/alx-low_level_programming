#include <stdio.h>
#include "lists.h"
/**
  * print_listint - prints all the elements of the list
  *
  * @h: the pointer to the first element of the list
  *
  * Return: the number of nodes in the list
  */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	listint_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
