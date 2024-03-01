#include "main.h"

/**
 * *leet - check the code for
 *
 * Return: Always 0.
 */
char *leet(char *ptr)
	{
	int a = 0, b = 0, l = 5;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (ptr[a])
	{
		b = 0;

		while (b < l)
		{
			if (ptr[a] == r[b] || ptr[a] - 32 == r[b])
			{
				ptr[a] = n[b];
			}

			b++;
		}

		a++;
	}

	return (ptr);
}
