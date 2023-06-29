#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;   /* Store the next node */
		current->next = prev;   /* Reverse the link */
		prev = current;         /* Move prev and current one step forward */
		current = next;
	}

	*head = prev;   /* Update the head pointer */

	return *head;
}

