#include "main.h"

int check_palindrome(char *s, int k, int l);
int _strlen_recursion(char *s);
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 * Return: 1 if string is palindrome 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (check_palindrome(s, 0, len - 1));
}
/**
 * check_palindrome - helper function to check if a string is a palindrome
 * @s: string to be checked
 * @k: start of the index
 * @l: end of the index
 * Return: 1 if string is a palindrome 0 otherwise
 */
int check_palindrome(char *s, int k, int l)
{
	if (k >= l)
		return (1);

	return ((s[k] == s[l]) && check_palindrome(s, k + 1, l - 1));
}
/**
 * _strlen_recursion - calculates the length of a string recursively
 * @s: input string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
