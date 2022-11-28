#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  * sum_listint - returns the sum of all the nodes in the list
  *
  * @head: the pointer to the first element of the list
  * 
  * Return: the sum of all the nodes in the list
  */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = malloc(sizeof(listint_t));

	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);

}
