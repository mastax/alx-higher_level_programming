#include <stdlib.h>
#include "lists.h"
/**
 * check_cycle - check if a singly_linked list contain a cycle
 * @list: a singly_linked list
 * Return: 0 if no cycle, 1 is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *turtle, *hare;

	if (list == NULL || list->next == NULL)
		return (0);
	turtle = list->next;
	hare = list->next;
	while (turtle && hare && hare->next)
	{
		if (turtle == hare)
			return (1);
		turtle = turtle->next;
		hare = hare->next->next;
	}
	return (0);
}
