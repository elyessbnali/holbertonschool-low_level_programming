#include "main.h"
#include <stdio.h>
/**
 * more_numbers -  function that prints 10 times the numbers, from 0 to 14
 * Return: Always  (Success)
 */

void more_numbers(void)
{
	int n;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				putchar((n / 10) + '0');
			}
			putchar((n % 10) + '0');
		}
		putchar('\n');
	}
}
