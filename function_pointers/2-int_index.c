#include "function_pointers.h"

/**
 * int_index - check if a number is equal to 98
 * @array: duh
 * @size: size of array
 * @cmp: function ptr
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || (*cmp) == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		(*cmp)(array[i]);
		if ((*cmp)(array[i]) != 0)
			break;
	}
	if (i == size)
		return (-1);
	return (i);
}
