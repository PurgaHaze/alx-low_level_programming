#include <stdio.h>
/**
 * main - prints alphabet except q and e
 * return : Always 0 (Success)
 */
int main(void)
{
	char alpha

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if(alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}
	}
	putchar('\n');
	return (0);
	
}
