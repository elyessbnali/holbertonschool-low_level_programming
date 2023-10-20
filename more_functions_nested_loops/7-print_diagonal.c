#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * Return: Always  (Success)
 * @n : integer
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{

		for (i = 0; i < n; i++)
		{
			for (j = 0; i > j; j++)
			{
				putchar(32);
			}
			putchar(92);
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
