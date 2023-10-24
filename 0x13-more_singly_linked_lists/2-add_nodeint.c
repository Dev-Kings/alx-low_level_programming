#include "lists.h"

/**
 * add_nodeint - adds node at beginning of linked list
 * @head: double pointer to head
 * @n: integer to be added
 *
 * Return: address of new element or NULL on failure.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = (listint_t *)malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	temp->n = n;
	temp->next = (*head);
	(*head) = temp;
	return ((*head));
}
