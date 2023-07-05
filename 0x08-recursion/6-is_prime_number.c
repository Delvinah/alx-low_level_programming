#include "main.h"

int check_prime(int n, int k);
/**
 * is_prime_number - checks if a number is a prime number
 * @n: nummber to be checked
 * Return: 1 if number is prime 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, n - 1));
}
/**
 * check_prime - calculates if a number is prime recursively
 * @n: numbuer to be checked
 * @k: iterator
 * Return: 1 if n is prime 0 otherwise
 */
int check_prime(int n, int k)
{
	if (k == 1)
		return (1);
	if (n % k == 0 && k > 0)
		return (0);
	return (check_prime(n, k - 1));
}
