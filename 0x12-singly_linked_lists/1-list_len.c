#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
  *list_len - returns the number of elements in linked list
  *@h: pointer to the list_t list
  *Return: number of elements in h
  */
size_t list_len(const list_t *h)
{
	size_t i;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

