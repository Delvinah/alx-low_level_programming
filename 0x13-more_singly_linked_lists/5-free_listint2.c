#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to the list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
	*head = NULL;
}

/**
 * main - entry point
 * Return: no value
 */
int main(void)
{
	listint_t *head = (listint_t *)malloc(sizeof(listint_t));

	head->n = 1;
	head->next = (listint_t *)malloc(sizeof(listint_t));
	head->next->n = 2;
	head->next->next = (listint_t *)malloc(sizeof(listint_t));
	head->next->next->n = 3;
	head->next->next->next = NULL;
	free_listint2(&head);
	return (0);
}
