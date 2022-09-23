#include "main.h"
/**
 * print_number - prints a integer
 * @n: The given integer
 * Return: void
 */
void print_number(int n)
{
	unsigned int a;

	if (n < 0)
	{
		putchar('-');
		n *= -1;
	}

	a = n;
	if (a / 10)
	{
		print_number(a / 10);
	}
	putchar(a % 10 + '0');
}
