#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning
 * of a listint_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

listint_t *add_nodeint(listint_t **head, const int n);
{
	listin_t *new;
	size_t nchar;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	new->len = nchar;
	new->next = *head;
	*head = new;

	return (*head);
}
