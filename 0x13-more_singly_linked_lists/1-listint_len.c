#include "lists.h"
/**
* listint_len _ the num of element in a linkedlist
*@h: pointer to the head of linkedlist
*Return: the number of elemenr in a list
*
*/
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h-> next;
	}
	return (len);
}
