#include <stdio.h>

/**
 * main - printing all single digits of base 10
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%d", number);
		number++;
	}

	putchar('\n');

	return (0);
}
