#include "main.h"

/**
 * swap_int - check the code
 * @a: argument
 * @b: argument
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int kev;

	kev = *a;
	*a = *b;
	*b = kev;
}
