#include "main.h"

/**
 * *_strncat - check the code
 * @dest: argument
 * @src: argument
 * @n: argument
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0;
	int slen = 0;

	while (dest[dlen] != '\0')
		dlen++;
	while (src[slen] != '\0' && slen < n)
	{
		dest[dlen] = src[slen];
		slen++;
		dlen++;
	}
	return (dest);
}
