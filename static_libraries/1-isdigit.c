#include <stdio.h>
#include "main.h"
/**
 * _isdigit -    function that checks for a digit (0 through 9).
 * Return: Always (Success)
 * @c : integer
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else

		return (0);
}
