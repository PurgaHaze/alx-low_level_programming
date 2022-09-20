#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @str: Given string
 * Return: void
 */
void print_rev(char *str)
{
	int rev = 0;

	while (str[rev] != '\0')
	{
		rev++;
	}

	for (rev -= 1; rev >= 0; rev--)
	{
		putchar(str[rev]);
	}
	putchar('\n');
}
