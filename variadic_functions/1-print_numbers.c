#include "variadic_functions.h"
/**
 * print_numbers - a function that prints numbers,
 * followed by a new line.
 * @separator: the separator
 * @n: the number of argument
 * @... : the numbers to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list argm;
v
	if (separator == NULL)
	{
		separator = "";
	}
	if (n != 0)
	{
		va_start(argm, n);

		while (i != 1)
		{
			printf("%d%s", va_arg(argm, int), separator);
			i--;
		}
		printf("%d\n", va_arg(argm, int));
	}
	else
	{
		printf("\n");
	}
	va_end(argm);
}
