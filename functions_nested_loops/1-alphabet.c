#include "main.h"

/**
 * print_alphabet - prints _putchar
 *
 * Return: Always (Success)
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
