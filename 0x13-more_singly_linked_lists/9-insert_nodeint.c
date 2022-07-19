#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t *head, unsigned int idx, int n)
{
	listint_t *new_node = NULL;
	listint_t *temp = head;
	unsigned int i = 0;

	if (idx == 0)
		return (add_nodeint_end(&head, n));
	while (temp != NULL)
	{
		if (i == idx - 1)
		{
			new_node = add_nodeint(&temp, n);
			if (new_node == NULL)
				return (NULL);
			return (head);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
