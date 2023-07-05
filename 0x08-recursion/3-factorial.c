#include "main.h"
/**
 * factorial - calculates factorial of a number
 * @n: the number whose factorial is to be calculated
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
