#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * leet - function that encodes a string into 1337
 * Return: str
 * @str : pointeur
 */
char *leet(char *str)
{
	char *p = str;
	char l[] = {'a', 'e', 'o', 't', 'l'};
	char n[] = {4, 3, 0, 7, 1};
	int i = 0;

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == l[i] || *str == l[i] - 32)
				*str = n[i] + '0';
		}
		str++;
	}
	return (p);
}
