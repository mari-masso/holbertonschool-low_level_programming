#include "main.h"

/**
 * print_alphabet - Write a function that prints
 * the alphabet, in lowercase, followed by a new line.
 *
 */

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
