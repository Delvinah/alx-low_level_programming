#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end list
 * @head: pointer to the first node
 * @n: data to insert to the latest node
 * Return: pointer to the latest node or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *latest_node = (listint_t *)malloc(sizeof(listint_t));

	if (latest_node == NULL)
	{
		return (NULL);
	}
	latest_node->n = n;
	latest_node->next = NULL;

	if (*head == NULL)
	{
		*head = latest_node;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = latest_node;
	}
	return (latest_node);
}
