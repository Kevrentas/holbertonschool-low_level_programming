#include "main.h"

/**
 * *_strstr - check the code
 * @haystack: argument
 * @needle: anotha one
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j = 0;

	while (needle[j] != '\0')
		j++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != j)
			haystack++;
		else
			return (haystack);
	}
	return ('\0');
}
