#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to head of linked list
 * @idx: index where new node should be added
 * @n: data to store in new node
 *
 * Return: address of new node, or NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

	for (i = 0; temp != NULL && i < idx - 1; i++)
		temp = temp->next;

	if (temp == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = temp->next;
	temp->next = new;
	return (new);
}

