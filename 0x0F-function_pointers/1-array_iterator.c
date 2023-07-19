#include "function_pointers.h"
#include<stdio.h>
/**
 * array_iterator - unction that executes a function given as
 * a parameter on each element of an array
 * @array: the array
 * @size: how many elements to be printed
 * @action: pointer to print
 * Return: no value
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;
	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}
}
