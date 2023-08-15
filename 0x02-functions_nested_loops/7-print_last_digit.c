#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @last: number with last digit to be printed
 * Return: last digit
 */

int print_last_digit(int last)
{
	int number = last % 10;

	if (number < 0)
		number = -number;

	return (number);
}
