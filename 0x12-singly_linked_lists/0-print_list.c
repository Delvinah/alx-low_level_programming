#include "lists.h"
#include<stdio.h>
/**
 * print_list - prints all elements of a singly linked list
 * @h: pointer to the list
 * Return: number of printed nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
