#include "main.h"
#include <stdlib.h>

/**
 * create_array - Float like a butterfly, sting like a bee
 * @size: argument
 * @c: argument
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	array = malloc(size * sizeof(c));

	while (i < size)
	{
		if (array == NULL)
		{
			return (NULL);
		}
		array[i] = c;
		i++;
	}
	return (array);
}
