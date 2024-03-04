#include "main.h"

/**
 * _strspn - check the code for
 * @s: argument
 * @accept: argument
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int bytes = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					bytes++;
			}
		}
		else
			return (bytes);

	}
	return (bytes);
}
