#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - get it done
 * @array: el array
 * @size: size of array
 * @action: funtcion ptr
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
