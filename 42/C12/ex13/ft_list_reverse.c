#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *a = *begin_list;
	t_list *b = 0;
	t_list *wher = 0;
	if (a)
	{
		b = a->next;
		a->next = 0;
	}
	while (b)
	{
		wher = b->next;
		b->next = a;
		a = b;
		b = wher;
	}
	if (a)
		*begin_list = a;
}
