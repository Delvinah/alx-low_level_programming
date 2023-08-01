#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the
 * beginning of a listint_t list
 * @head: first node pointer
 * @n: data to be inserted to current node
 * Return: NULL if it fails or pointer to the current node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current_node = (listint_t *)malloc(sizeof(listint_t));

	if (current_node == NULL)
	{
	return (NULL);
	}
current_node->n = n;
current_node->next = *head;
*head = current_node;

return (current_node);
}
