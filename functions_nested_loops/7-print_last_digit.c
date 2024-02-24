#include "main.h"

/**
 * print_last_digit - check the code
 * @k: an argument
 * Return: Always 0.
 */
int print_last_digit(int k)
{
	int f;

	f = (k % 10);
	if (f < 0)
	{
		f = (-1 * f);
	}
	_putchar('0' + f);
	return (f);
}
