#include "main.h"

/**
 * *_strncpy - check the codechar
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int idx = 0;

	while (idx < n && src[idx])
	{
		dest[idx] = src[idx];
		idx++;
	}

	while (idx < n)
	{
		dest[idx] = '\0';
		idx++;
	}

	return (dest);
}
