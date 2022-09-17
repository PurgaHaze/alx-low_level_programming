#include "main.h"

/**
 * _isupper - sees if the a letter is a upper
 * @x: the number
 *
 * Return:1  for upper or 0 for anything else
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}

	return (0);
}
