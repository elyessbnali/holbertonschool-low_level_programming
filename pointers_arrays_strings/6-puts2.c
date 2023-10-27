#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - function that reverses a string.
 * Return: Always  (Success)
 * @str : pointeur
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			printf("%c", str[i]);
		}
		i = i + 1;
	}
	printf("\n");
}
