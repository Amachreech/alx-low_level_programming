#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_listint2(listint_t **head);
{
	listint_t *head;

	while (head = NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
