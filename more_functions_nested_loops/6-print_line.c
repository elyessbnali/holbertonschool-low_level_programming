#include "main.h"
#include <stdio.h>
/**
 * print_line - function that draws a straight line in the terminal
 * Return: Always  (Success)
 * @n : integer
 */

void print_line(int n)
{
	while (n > 0)
	{
		putchar('_');
		n--;
	}
	putchar('\n');
}
