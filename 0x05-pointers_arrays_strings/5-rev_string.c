#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string
 * Return: void
 */
void rev_string(char *s)
{
	int a, c, k;
	char *q, r;

	q = s;
	while (s[c] != '\0')
	{
		c++;
	}

	for (k = 1; k < c; k++)
	{
		q++;
	}

	for (a = 0; a < (c / 2); a++)
	{
		r = s[a];
		s[a] = *q;
		*q = r;
		q--;
	}
}


