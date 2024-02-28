#include "main.h"

/**
 * puts2 - check the code
 * @str: argument
 * Return: Always 0.
 */
void puts2(char *str)
{
	int count;
	char num;

	for (count = 0; str[count] != '\0'; count++)
	{
		if (count % 2 == 0)
		{
			num = str[count];
			_putchar(num);
		}
	}
	_putchar('\n');
}
