#include "main.h"

/**
 * print_line - check the code
 * @n: an argument
 * Return: Always 0.
 */
void print_line(int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		_putchar(95);
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
	_putchar('\n');
}
