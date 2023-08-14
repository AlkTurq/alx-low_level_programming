#include <stdio.h>

/**
 * main - print all lower case letters except q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	int lower_case = 'a';

	while (lower_case <= 'z')
	{
		if (lower_case == 'q' || lower_case == 'e')
		{
			continue;
		}
		else
		{
			putchar(lower_case);
			lower_case++;
		}
	}

	putchar('\n');

	return (0);
}
