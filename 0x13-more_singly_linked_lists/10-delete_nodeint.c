#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if success, 0 if failure
 */
int delete_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	listint_t *temp2;
	unsigned int i;

	if (head == NULL)
		return (0);
	if (index == 0)
	{
		temp = head->next;
		free(head);
		head = temp;
		return (1);
	}
	temp = head;
	for (i = 0; i < index - 1; i++)
	{
		if (temp == NULL)
			return (0);
		temp = temp->next;
	}
	if (temp == NULL)
		return (0);
	temp2 = temp->next;
	temp->next = temp2->next;
	free(temp2);
	return (1);
}
