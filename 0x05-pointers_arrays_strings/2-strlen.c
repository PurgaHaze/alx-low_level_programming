#include "main.h"
#include <string.h>
/**
 * _strlen - Returns the length of the given string;
 * @s: the string
 * Return: length of s
 */
int _strlen(char *s)
{
	int length = 0;

	for (; *s != '\0' ; s++)
	{
		length++;
	}
	return (length);
}
