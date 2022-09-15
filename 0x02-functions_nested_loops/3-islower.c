#include "main.h"
/**
 * _islower - checks for lowercase character
 * @letter: character to be checked
 * Return: 1 for lowercase and 0 for anything else
 */

int _islower(int letter)
{
	if (letter >= 97 && letter <= 122)
	{
		return (1);

	}

	return (0);
}
