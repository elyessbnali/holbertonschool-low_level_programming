#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * cap_string - function that capitalizes all words of a string
 * Return: str
 * @str : pointeur
 */
char *cap_string(char *str)
{
	int i;
	char *p = str;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = (int)str[i] - 32;
		}
		switch (str[i])
		{
		case ' ':
		case '\t':
		case '\n':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}

	}
	return (p);
}
