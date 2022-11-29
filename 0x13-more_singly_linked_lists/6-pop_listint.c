#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  * pop_listint - deletes the head node of a linked list
  *
  * @head: the pointer to the first element of the list
  *
  * Return: the data of the head node
  */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;

	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
