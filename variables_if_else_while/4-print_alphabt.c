#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print the
 * alphabet without the letterq or e'.
 *
 *Return: 0(Success)
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'e' || x == 'q')
		{
			x = x + 1;
		}
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
