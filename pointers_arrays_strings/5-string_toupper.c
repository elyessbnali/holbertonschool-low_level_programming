#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * string_toupper - function that reverses a string.
 * Return: upp
 * @str : pointeur
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = (int)str[i] - 32;
	}
	return (str);
}
