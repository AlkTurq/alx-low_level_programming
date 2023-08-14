#include <stdio.h>
#include <ctype.h>

/**
 * main - printing in lower case
 * Return: Always 0 (Success)
 */

int main(void)
{
	int lower_case = 'a';

	while (lower_case <= 'z')
	{
		putchar(lower_case);
		lower_case++;
	}
	putchar('\n');

	return (0);
}
