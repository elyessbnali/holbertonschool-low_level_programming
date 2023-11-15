#include "main.h"
#include <stdio.h>
/**
 * _strlen - function that returns the length of a string
 * Return: Always  (Success)
 * @s : pointeur
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
