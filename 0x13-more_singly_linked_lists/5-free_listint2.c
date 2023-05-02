#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: pointer to the head of the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *vin;

	if (head == NULL)
		return;

	while (*head)
	{
		vin = (*head)->next;
		*head = vin;
		free(*head);
	}

	*head = NULL;
}
