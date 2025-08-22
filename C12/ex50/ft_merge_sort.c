#include "ft_list.h"

void	split(t_list *head, t_list **a, t_list **b)
{
	t_list *i = 0;
	t_list *k = 0;
	if (head)
	{
		*a = head;
		k = head;
		i = head->next;
	}
	while (i && i->next)
	{
		k = k->next;
		i = i->next->next;
	}
	if (k)
		*b = k->next;
	if (*b)
		k->next = 0;
}

t_list	*window_shopping(t_list *a, t_list *b, int (*cmp)(void *, void *))
{
	t_list result;
	t_list *tail = &result;

	result.next = 0;

	while (a && b)
	{
		if (cmp(a->data, b->data) < 0)
		{
			tail->next = a;
			a = a->next;
		}
		else
		{
			tail->next = b;
			b = b->next;
		}
		tail = tail->next;
	}
	while (a || b)
	{
		
		if (a)
		{
			tail->next = a;
			a = a->next;
		}
		else
		{
			tail->next = b;
			b = b->next;
		}
		tail = tail->next;
	}
	return (result.next);
}

void	ft_merge_sort(t_list **start, int (*cmp)(void *, void *))
{
	t_list *a = 0;
	t_list *b = 0;

	if (start)
		split (*start, &a, &b);
	if (a && a->next)
		ft_merge_sort(&a, cmp);
	if (b && b->next)
		ft_merge_sort(&b, cmp);

	*start = window_shopping(a, b, cmp);
}
