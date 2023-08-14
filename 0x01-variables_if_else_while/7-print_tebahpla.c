#include <stdio.h>

/**
 * main - print the lowercase alphabet in reverse, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int lowercase = 'z';

	for (; lowercase >= 'a';)
	{
		putchar(lowercase);
		lowercase--;
	}

	putchar('\n');

	return (0);
}
