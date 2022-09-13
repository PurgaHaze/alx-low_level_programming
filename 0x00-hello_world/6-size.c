#include <stdio.h>
/**
 * main - getting the size of various types
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char x;
	int a;
	long int b;
	long long int c;
	float d;


	printf("Size of char:%lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of int:%lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of long int:%lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of long long int:%lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of float:%lu byte(s)\n", (unsigned long)sizeof(d));
	return (0);
}
