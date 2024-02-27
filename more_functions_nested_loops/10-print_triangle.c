#include "main.h"

/**
 * print_triangle - check the code
 * @size: argument
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int k, f, m;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 0; k < size; k++)
		{
			for (f = size - k; f > 1; f--)
			{
				_putchar(32);
			}
			for (m = 0; m <= k; m++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
