#include "main.h"

/**
 * *_strchr - check the code for
 * @s: argument
 * @c: argument
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return ('\0');
}
