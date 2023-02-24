#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end -  function that adds a new node at the end of,
 * a listint_t list.
 * @head: pointer to the pointer of head of linked list.
 * @n: data to add to the list.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *traverse = *head; /* pointer to the first node */

	/* create a new node */
	new_node = malloc(sizeof(listint_t));
	/* check if malloc has failed and return null */
	if (new_node == NULL)
		return (NULL);
	/* access the n field of the struct and initialize it with n */
	/* which has been passed to the function */
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (traverse->next != NULL)
		traverse = traverse->next;
	traverse->next = new_node;
	return (new_node);
}
