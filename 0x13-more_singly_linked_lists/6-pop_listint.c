#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - Removes the head node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The head node's data (n), or 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);
	return (n);
}
