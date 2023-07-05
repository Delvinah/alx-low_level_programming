#include "main.h"

int actual_sqrt_recursion(int n, int k);
/**
 * _sqrt_recursion - returns a natural square root of a number
 * @n: the number whose square root is to be calculated
 * Return: square root of the number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - calculates recursively,
 * natural square root of a number
 * @n: number whose square root is to be calculated
 * @k: the iterator
 * Return: the square root result
 */
int actual_sqrt_recursion(int n, int k)
{
	if (k * k > n)
		return (-1);
	if (k * k == n)
		return (k);
	return (actual_sqrt_recursion(n, k + 1));
}
