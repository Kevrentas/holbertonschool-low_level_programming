#include "main.h"

/**
 * *_strcat - check the code
 * @dest: argument
 * @src: argument
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0;
	int slen = 0;

	while (dest[dlen] != '\0')
		dlen++;
	while (src[slen] != '\0')
	{
		dest[dlen] = src[slen];
		slen++;
		dlen++;
	}
	return (dest);
}
