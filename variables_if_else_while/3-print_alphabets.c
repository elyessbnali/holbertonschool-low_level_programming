#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase and then in uppercase
 * Return: Always (Success)
 */
int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}

for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}

putchar('\n');

return (0);
}
