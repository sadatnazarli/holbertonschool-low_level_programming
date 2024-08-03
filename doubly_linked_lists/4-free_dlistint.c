#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to head node
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cr = head;
	dlistint_t *new_node;

	while (cr != NULL)
	{
		new_node = (*cr).next;
		free(cr);
		cr = new_node;
	}
}
