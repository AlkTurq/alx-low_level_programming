#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @num: value to be checked
 * Return: Absolute value of num
 */

int _abs(int num)
{
	if (num > 0 || num == 0)
		return (num);
	else
		return (-num);
}
