#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if success, 0 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev;
	listint_t *next;

	prev = *head;
	if (index != 0)
	{
		for (i = 0; i < index - 1 && prev != NULL; i++)
			prev = prev->next;
		if (prev == NULL || (prev->next == NULL && index != 0))
			return (-1);
		next = prev->next->next;
		if (index != 0)
		{
			prev->next = next->next;
			free(next);
		}
		else
		{
			free(prev);
			*head = next;
		}
	}
	return (1);
}
