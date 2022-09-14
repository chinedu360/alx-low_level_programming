#include "main.h"
/**
 * _isalpha - a function that checks for alphanumeric charcters
 * @c: single letter input
 * Return: 1 if c is letter(lower or uppercase), 0 otherwise
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (C <= 'Z')))
		return (1);
	else
		return (0)
}
