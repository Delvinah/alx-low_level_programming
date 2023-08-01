#include "lists.h"
/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list
 * @h: linked list to be traversed
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t tally = 0;

	while (h != NULL)
	{
		tally++;
		h = h->next;
	}
	return (tally);
}
