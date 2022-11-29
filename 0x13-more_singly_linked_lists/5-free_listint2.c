#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  * free_listint2 - frees a listint_t list
  *
  * @head: the pointer to the first element of the list
  *
  * Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
