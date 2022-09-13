#include "main.h"

/**
 * print alphabet - in lowercase
 *
 * Return: 0
 */
int print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
