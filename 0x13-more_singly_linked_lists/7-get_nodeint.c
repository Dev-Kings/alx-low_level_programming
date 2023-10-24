#include "lists.h"

/**
 * get_nodeint_at_index - finds nth node of a linked list
 * @head: pointer to head node
 * @index: position of node
 *
 * Return: nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i, position;

	i = index;
	position = 0;
	while (head)
	{
		temp = head;
		if (position == i)
		{
			return (temp);
		}
		position++;
		head = temp->next;
	}
	return (NULL);
}
