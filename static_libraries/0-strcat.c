#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - function that copies the string pointed
 * @dest : pointeur
 * @src : pointeur
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;
	for (j = 0; src[j]; j++)
		dest[i++] = src[j];
	return (dest);
}
