#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * dlistint_len - prints all the elements of a dlistint_t list
 * @h: pointer to the head node
 * Return: number of nodes
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *cr = h;
	size_t count = 0;

	while (cr != NULL)
	{
		cr = (*cr).next;
		count++;
	}
	return (count);
}
