#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nn;/*nn = new node*/
	size_t nchar;/*nchar = new character*/

	nn = malloc(sizeof(list_t));
	if (nn == NULL)
		return (NULL);

	nn->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	nn->len = nchar;
	nn->next = *head;
	*head = nn;

	return (*head);
}
