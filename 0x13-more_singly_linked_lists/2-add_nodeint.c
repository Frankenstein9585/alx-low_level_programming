#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  * add_nodeint - adds a new node to the beginning of the list
  *
  * @head: the pointer to the first element of the list
  *
  * @n: the data of the new node to be added
  *
  * Return: the address of the new element or NULL if failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	ptr->n = n;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;

	if (*head == NULL)
		return (NULL);

	return (*head);

}
