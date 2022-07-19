#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - sums the elements of a linked list
 * @head: pointer to the first node of the list
 * Return: sum of the elements of the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
