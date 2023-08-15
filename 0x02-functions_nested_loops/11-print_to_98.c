#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * and followed by a new line
 *@n: number input
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n >= 98; n++)
		{
			_putchar(n + '0');
		}
	}
	else if (n > 98)
	{
		for (; n <= 98; n--)
		{
			_putchar(n + '0');
		}
	}
}
