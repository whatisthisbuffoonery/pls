#include "ft_list.h"

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
	t_list *result = 0;
	t_list *head = 0;
	t_list *a = *begin_list1;
	t_list *b = begin_list2;

	if (a && b)
	{
		if (!(cmp(a->data, b->data) > 0))
		{
			result = a;
			a = a->next;
		}
		else
		{
			result = b;
			b = b->next;
		}
	}
	head = result;
	while (a && b)
	{
		if (!(cmp(a->data, b->data) > 0))
		{
			result->next = a;
			a = a->next;
		}
		else
		{
			result->next = b;
			b = b->next;
		}
		result = result->next;
	}
	if (!result)
	{
		if (a)
		{
			result = a;
			a = a->next;
		}
		if (b)
		{
			result = b;
			b = b->next;
		}
		head = result;
	}
	while (a || b)
	{
		if (a)
		{
			result->next = a;
			a = a->next;
		}
		if (b)
		{
			result->next = b;
			b = b->next;
		}
		result = result->next;
	}
	if (head)
		*begin_list1 = head;
}
