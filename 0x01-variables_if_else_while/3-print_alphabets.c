#include <stdio.h>

/**
 * main - printing lower case and uppercase characters
 * Return: Always 0 (Success)
 */

int main(void)
{
	int lower_case = 'a';
	int upper_case = 'A';

	while (lower_case <= 'z')
	{
		putchar(lower_case);
		lower_case++;
	}
	while (upper_case <= 'Z')
	{
		putchar(upper_case);
		upper_case++;
	}

	putchar('\n');

	return (0);
}
