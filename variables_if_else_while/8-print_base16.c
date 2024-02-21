#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hexanum = 48;
	int hexachar = 97;

	while (hexanum <= 57)
	{
		putchar(hexanum);
		hexanum++;
	}
	while (hexachar <= 102)
	{
		putchar(hexachar);
		hexachar++;
	}
	putchar('\n');
	return (0);
}
