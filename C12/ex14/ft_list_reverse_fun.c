#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list);

/*
t_list	*where(t_list *start, t_list *end)
{
	while (start->next != end)
		start = start->next;
	return (start);
}
*/

void	split_once(t_list *head, t_list **a, t_list **b)
{
	t_list *i = 0;

	if (head)
	{
		*a = head;
		*b = head;
		i = head->next;
	}
	while (i && i->next)
	{
		*b = (*b)->next;
		i = i->next->next;
	}
	i = *b;
	*b = (*b)->next;
	i->next = 0;
}

/*
void	ft_list_reverse_fun(t_list *begin_list) //moulinette compliant
{
	int i = 0;
	int k = 0;
	void *swap = 0;
	t_list *tail = 0;
	if (begin_list)
	{
		i ++;
		tail = begin_list->next;
	}
	while (tail && tail->next)
	{
		i ++;
		tail = tail->next;
	}
	if (i > 1)
	{
		while (k < i / 2)
		{
			swap = begin_list->data;
			begin_list->data = tail->data;
			tail->data = swap;

			tail = where(begin_list, tail);
			begin_list = begin_list->next;

			k ++;
		}
	}
}
*/

void    ft_list_reverse_fun(t_list *begin_list) //technically theres three func spaces to fit one ft_list_reverse
{
	t_list *a = 0;
	t_list *b = 0;
	t_list *a_safe = 0;
	t_list *b_safe = 0;
	t_list *swap = 0;

	split_once(begin_list, &a, &b);
	ft_list_reverse(&b);
	b_safe = b;
	while(b)
	{
		swap = a->data;
		a->data = b->data;
		b->data = swap;
		a_safe = a;
		a = a->next;
		b = b->next;
	}
	while (a_safe && a_safe->next)
		a_safe = a_safe->next;
	if (a_safe && b_safe)
	{
		ft_list_reverse(&b_safe);
		a_safe->next = b_safe;
	}
}
