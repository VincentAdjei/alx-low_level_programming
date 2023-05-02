#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node's data
 * @head: pointer to the head of the list
 *
 * Return: the head node's data (n) or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *deb;
	int vin;

	if (!head || !*head)
		return (0);

	vin = (*head)->n;
	deb = (*head)->next;
	free(*head);
	*head = deb;

	return (vin);
}
