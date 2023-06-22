#include "main.h"
/**
 * _isdigit - checks if char is a digit
 * @x: the number to be checked
 * Return: 1 if a char is a digit, 0 otherwise
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
