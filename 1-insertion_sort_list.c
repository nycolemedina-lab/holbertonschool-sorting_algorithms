#include "sort.h"

/**
* swap_nodes - swap two nodes in a doubly link list
* @list: double pointer to the head of the doubly linked list
* @node1: pointer to the left node
* @node2: pointer to the right node
*/
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
	node1->next = node2->next;
	if (node2->next != NULL)
		node2->next->prev = node1;

	node2->prev = node1->prev;
	if (node1->prev != NULL)
		node1->prev->next = node2;
	else
		*list = node2;
	node2->next = node1;
	node1->prev = node2;
}

/**
* insertion_sort_list - sorts a doubly linked list of integers
*			in ascending order using insertion sort
* @list: double pointer to the head of the doubly linked list
*
* Return: void
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *insert, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	curr = (*list)->next;
	while (curr != NULL)
	{
		tmp = curr->next;
		insert = curr;

		while (insert->prev != NULL && insert->n < insert->prev->n)
		{
			swap_nodes(list, insert->prev, insert);
			print_list(*list);
		}
		curr = tmp;
	}
}
