#include <stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by new line.
 * @separator: string to be print between numbers.
 * @n: number of integers passed to function.
 * @...: variable number of numbers to print.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
