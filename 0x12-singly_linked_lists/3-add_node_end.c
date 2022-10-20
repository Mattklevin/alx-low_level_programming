#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nn, *temp;
	size_t nchar;

	nn = malloc(sizeof(list_t));
	if (nn == NULL)
		return (NULL);

	nn->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	nn->len = nchar;
	nn->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = nn;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = nn;
	}

	return (*head);
}
