#include "lists.h"

/**
 * dlistint_len - function with one argument
 * @h: ptr to doubly linked list
 * Description: count number of elements in doubly
 * Return: total num of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
