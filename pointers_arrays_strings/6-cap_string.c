#include "main.h"

/**
 * *cap_string - check the code
 * @ptr: argument
 * Return: Always 0.
 */
char *cap_string(char *ptr)
{
	int a = 0, i;
	int cspc = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (ptr[a])
	{
		i = 0;

		while (i < cspc)
		{
			if ((a == 0 || ptr[a - 1] == spc[i]) && (ptr[a] >= 97 && ptr[a] <= 122))
				ptr[a] -= 32;

			i++;
		}

		a++;
	}

	return (ptr);
}
