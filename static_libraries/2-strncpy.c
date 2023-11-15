#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncpy - function that copies the string pointed
 * @dest : pointeur
 * @src : pointeur
 * @n : nbr of byte
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
