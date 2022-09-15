#include <stdio.h>
/**
 * main - list natural number below 1024
 * 		thatt are multiple of 2 and 3
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
