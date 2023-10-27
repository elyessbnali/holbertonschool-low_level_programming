#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - function that prints half of a string
 * Return: Always  (Success)
 * @str : pointeur
 */
void puts_half(char *str)
{
	int i, n, m;

	n = strlen(str);
	if (n % 2 == 0)
		m = (n / 2) - 1;
	else
		m = ((n - 1) / 2);
	for (i = m + 1; i < n; i++)
	{
		putchar(*(str + i));
	}
	putchar('\n');
}
