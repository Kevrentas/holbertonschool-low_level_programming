#include "main.h"

/**
 * print_line - check the code
 * @n: an argument
 * Return: empty
 */
void print_line(int n)
{
	int k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 0; k < n; k++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}
