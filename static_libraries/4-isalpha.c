#include "main.h"

/**
 *  _isalpha - 
 * Return: Always (Success)
 * @c : integert
 */
int _isalpha(int c)
{

	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
