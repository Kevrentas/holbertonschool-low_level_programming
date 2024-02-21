#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet = 'a';
	char Alphabet = 'A';

	while (alphabet <= 'z')
		{
		putchar(alphabet);
		alphabet++;
		}
	while (Alphabet <= 'Z')
	{
		putchar(Alphabet);
		Alphabet++;
	}
		putchar('\n');
		return (0);
}
