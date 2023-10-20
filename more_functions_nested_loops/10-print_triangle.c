#include "main.h"
#include <stdio.h>
/**
 * print_triangle - function that prints a square, followed by a new line
 * Return: Always  (Success)
 * @size : integer
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		putchar('\n');
	}

	for (i = 1; i < size + 1; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < size - i)
			{
				putchar(' ');
			}
			else
			{
				putchar('#');
			}
		}
		putchar('\n');
	}
}
