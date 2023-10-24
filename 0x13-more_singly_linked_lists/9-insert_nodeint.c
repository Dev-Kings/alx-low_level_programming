#include "lists.h"

/**
 * insert_nodeint_at_index - inserts integer at specified node index
 * @head: double pointer to head node
 * @idx: index of list to add new node
 * @n: integer to add to node specified
 *
 * Return: address of the new node, or NULL if fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int position, i;
	int num;

	temp = (*head);
	position = idx;
	num = n;
	new = (listint_t *)malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = num;
	new->next = NULL;

	if (position == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; temp && i < position; i++)
	{
		if (i == (position - 1))
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
		{
			temp = temp->next;
		}
	}
	return (NULL);
}
