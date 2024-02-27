#include "main.h"

/**
 * print_rev - check the code
 * @s: argument
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		k++;
	}

	for (k -= 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}

	_putchar('\n');
}
