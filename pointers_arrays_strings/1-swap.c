#include "main.h"
#include <stdio.h>
/**
 * swap_int - function that swaps the values of two integers
 * Return: Always  (Success)
 * @a : pointeur
 * @b : pointeur
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
