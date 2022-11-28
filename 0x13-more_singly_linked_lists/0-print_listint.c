#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
  * print_listint - prints all the elements of the list
  *
  * @h: the pointer to the first element of the list
  *
  * Return: the number of nodes in the list
  */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	while (h)

	{
		if (&h->n == NULL)
			printf("[0] (nil)\n");
		else
			printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
