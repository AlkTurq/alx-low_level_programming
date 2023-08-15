#include <main.h>

/**
 * main - sum of natural numbers below 1024
 * Return: Always 0 (Success)
 */

int main(void)
{
	int mult, sum = 0;

	for (mult = 0; mult < 1024; mult++)
	{
		if ((mult % 3) == 0 || (mult % 5) == 0)
		{
			sum += 1;
		}
	}

	printf("%d", sum);
	putchar('\n');

	return (0);
}
