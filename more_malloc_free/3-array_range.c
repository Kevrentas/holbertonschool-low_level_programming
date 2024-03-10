#include "main.h"
#include <stdlib.h>

/**
  * array_range - creating an array of integers.
  * @min: number min
  * @max: number max
  * Return: pointer
  */
int *array_range(int min, int max)
{
	int *array, i = 0;

	if (min > max)
		return (NULL);

	array = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (array == NULL)
		return (NULL);

	while (min <= max)
	{
		array[i] = min;
		i++;
		min++;
	}

	return (array);
}
