#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  * get_nodeint_at_index - deletes the head node of a linked list
  *
  * @head: the pointer to the first element of the list
  *
  * @index: position of the node to be retunred\
  *
  * Return: the node at the specified index
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int i = 0;

	for (i = 0; i < index; ++i)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
	}

	return (ptr);
}
