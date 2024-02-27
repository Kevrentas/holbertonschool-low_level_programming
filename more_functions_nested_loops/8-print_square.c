#include "main.h"

/**
 * print_square - check the code
 * @size: argument
 * Return: Always 0.
 */
void print_square(int size)
{
	int k, f;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 0; k < size; k++)
		{
			for (f = 0; f < size; f++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
