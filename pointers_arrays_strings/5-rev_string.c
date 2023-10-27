#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - function that reverses a string.
 * Return: Always  (Success)
 * @s : pointeur
 */
void rev_string(char *s)
{
	int len;
	int i;
	char tmp;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
