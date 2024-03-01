#include "main.h"

/**
 * print_array - print an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int *ptr, i, aux, k;

	ptr = a;

	for (i = 1; i < n; i++)
	{
		ptr++;
	}

	for (k = 0; k < i / 2; k++)
	{
		aux = a[k];
		a[k] = *ptr;
		*ptr = aux;
		ptr--;
	}
}
