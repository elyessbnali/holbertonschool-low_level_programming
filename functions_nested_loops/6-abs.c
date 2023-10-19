#include <stdio.h>
#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer.
 * Return: Always (Success)
 * @n: integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs_vall;
			abs_vall = n * -1;
		return (abs_vall);
	}
	return (n);
}
