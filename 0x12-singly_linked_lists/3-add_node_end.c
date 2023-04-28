#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nn;
	list_t *debb = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	nn = malloc(sizeof(list_t));
	if (!nn)
		return (NULL);

	nn->str = strdup(str);
	nn->len = len;
	nn->next = NULL;

	if (*head == NULL)
	{
		*head = nn;
		return (nn);
	}

	while (debb->next)
		debb = debb->next;

	debb->next = nn;

	return (nn);
}
