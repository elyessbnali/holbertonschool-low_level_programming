#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 *main prints all single digit numbers of base 10 starting from 0
 * Return: Always (Success)
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		x++;
	}
	putchar('\n');

	return (0);
}
