#include "sort.h"


/**
 * swap - swaps 2 nodes in a doubly-linked list
 * @a: address of first node
 * @b: address of second node
 *
 * Return: void
 */
void swap(listint_t *a, listint_t *b)
{
	if (a->prev)
		a->prev->next = b;
	if (b->next)
		b->next->prev = a;
	a->next = b->next;
	b->prev = a->prev;
	a->prev = b;
	b->next = a;
}



/**
 * insertion_sort_list - a function that sorts a doubly linked list of integers
 *
 * @list: address of pointer to head node
 *
 * Return: void
 **/
void insertion_sort_list(listint_t **list)
{
	listint_t *node;
	listint_t *j;

	/**if list is less than 2, do not sort**/
	if (!list || !*list || !(*list)->next)
		return;

	node = (*list)->next;

	while (node)
	{
		j = node;
		node = node->next;

		while (j && j->prev)
		{
			if (j->prev->n > j->n)
			{
				swap(j->prev, j);
				if (!j->prev)
					*list = j;
				print_list((const listint_t *)*list);
			}
			else
				j = j->prev;
		}
	}
}
