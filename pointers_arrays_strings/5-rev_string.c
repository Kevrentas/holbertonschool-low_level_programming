#include "main.h"

/**
 * rev_string - check the code
 * @s: argument
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int f, r_s;
	char character;

	for (f = 0; s[f] != '\0'; f++)

	r_s = 0;
	for (f = f - 1; r_s < f; r_s++)
	{
		character = s[f];
		s[f] = s[r_s];
		s[r_s] = character;
		f--;
	}
}
