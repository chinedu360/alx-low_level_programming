#include "main.h"

/** 1-swap.c - func that swaps two int
 * @a: int address
 * @b: int address
 *
 * Return: 1 or 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
