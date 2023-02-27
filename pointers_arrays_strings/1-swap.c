#include "main.h"

/**
 * swap_int - Entry point
 *
 * @*a: value of b
 * @*b: value of a
 * @a: 98
 * @b: 42
 *
 * Description: 'Write a function that
 * swaps the values of two integers.'
 *
 */

void swap_int(int *a, int *b)
{
	int p = *b;

	*b = *a;
	*a = p;
}
