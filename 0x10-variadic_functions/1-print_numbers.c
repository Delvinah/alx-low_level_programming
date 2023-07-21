#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int k;

	va_start(nums, n);

	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(nums, int));
		if (separator != NULL && k != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
