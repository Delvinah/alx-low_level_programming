#include "lists.h"
/**
 * free_listint - frees linked list
 * @head: linked list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *present = head;
	listint_t *next_node;

	while (present != NULL)
	{
		next_node = present->next;
		free(present);
		present = next_node;
	}
}
