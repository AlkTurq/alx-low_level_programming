#include <stdio.h>

/**
 * main -print all the numbers of base 16 in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int mod16 = 0;

	for (; mod16 < 10; mod16++)
	{
		putchar((mod16 % 10) + '0');
	}

	for (mod16 = 'a'; mod16 <= 'f'; mod16++)
	{
		putchar(mod16);
	}

	putchar('\n');

	return (0);
}
