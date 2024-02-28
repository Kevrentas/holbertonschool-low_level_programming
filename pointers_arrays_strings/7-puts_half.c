#include "main.h"

/**
 * puts_half - check the code
 * @str: argument
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i = 0;
	int num;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 1)
	{
		num = (i - 1) / 2;
		num += 1;
	}
	else
	{
		num = i / 2;
	}
	for (; num < i; num++)
	{
		_putchar(str[num]);
	}
	_putchar('\n');
}
