#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: the array
 * @size: size of elements in an array
 * @cmp: pointer to the function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (m = 0; m < size; m++)
	{
		if (cmp(array[m]))
			return (m);
	}
	return (-1);
}
