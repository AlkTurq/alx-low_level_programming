#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line
 */

void print_alphabet_x10(void)
{
	char x10, count;

	for (count = 0; count < 10; count++)
	{
		for (x10 = 'a', x10 <= 'z'; x10++)
		{
			_putchar(x10);
		}

		_putchar('\n');
	}
}

