#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at specified index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 if successful, or -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *current = NULL;
	unsigned int i;

	i = 0;
	temp = (*head);
	if (!(*head))
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		if (!temp || !(temp->next))
		{
			return (-1);
		}
		temp = temp->next;
		i++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}
