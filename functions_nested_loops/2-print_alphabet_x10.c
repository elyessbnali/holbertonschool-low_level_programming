#include "main.h"

/**
 * print_alphabet - prints _putchar
 *
 * Return: Always (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	for (i = 0; i < 9; i++)
	{
		char alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
	}
}