#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - a fuction that prints all natural nums from n to 98
 * user enters a number it prints to 98, whether ist gt 98 or ls 98
 * @n: number input
 * Return: Always 0 (success)
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
