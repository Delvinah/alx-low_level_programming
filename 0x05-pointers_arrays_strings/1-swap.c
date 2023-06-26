#include "main.h"
/**
 * swap_int - swaps values of two integers
 * @a: first integer
 * @b: second integer
 * Return: no value
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
