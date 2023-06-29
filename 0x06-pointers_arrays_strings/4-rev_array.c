#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: the array
 * @n: number of elements in the array
 * Return: no value
 */
void reverse_array(int *a, int n)
{
	int m;
	int o;

	for (m = 0; m < n--; m++)
	{
		o = a[m];
		a[m] = a[n];
		a[n] = o;
	}
}
