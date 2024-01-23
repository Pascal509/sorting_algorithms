#include "sort.h"

/**
 * Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm
 *
 * insertion_sort_list - sorts a doubly-linked list
 * @list: address of pointer to head node
 *
 * Return: void
 * **/
void insertion_sort_list(listint_t **list)
{
	int temp;
	listint_t i, k;

	/**if list is less than 2, do not sort**/
	if (!list || !*list || !(*list)->next < 2)
		return;

	i = (*list)->next;

	while (i)
	{
		j = i;
		i = i->next;

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
				j = j->prev
		}
	}

}

/**
 * swap - swaps 2 nodes in a doubly-linked list
 * @a: address of first node
 * @b: address of second node
 *
 * Return: void
 */
void swap(listint_t *x, listint_t *y)
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
