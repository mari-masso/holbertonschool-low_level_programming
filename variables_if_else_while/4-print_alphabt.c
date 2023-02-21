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
		if (x == 'd' || x == 'p')
		{
			x = x++;
		}
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
