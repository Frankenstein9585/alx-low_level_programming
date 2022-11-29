#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  * insert_nodeint_at_index - inserts a new node at a specified index
  *
  * @head: the pointer to the first element of the list
  *
  * @idx: position to add new node
  *
  * @n: data of the new node
  *
  * Return: the node at the specified index
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = malloc(sizeof(listint_t));
	listint_t *ptr = *head;
	unsigned int i = 0;

	temp->n = n;
	temp->next = NULL;

	for (i = 0; i < idx - 1; ++i)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
	}

	temp->next = ptr->next;
	ptr->next = temp;

	if (temp == NULL)
		return (NULL);

	return (temp);

}
