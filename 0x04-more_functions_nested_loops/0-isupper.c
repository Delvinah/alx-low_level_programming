#include "main.h"
/**
 * _isupper - checks if the letter is uppercase
 * @x: the number to be examined
 * Return: 1 if the letter is uppercase, 0 otherwise
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
