#include <stdio.h>
#include "lists.h"

/**
 * list_len - function with one argument
 * @h: const list_t ptr argument to struct
 *
 * Description: returns the number of elements in a linked list
 * Return: num of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
