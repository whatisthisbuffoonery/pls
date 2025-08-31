#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *a = 0;
	if (*begin_list1)
		a = *begin_list1;
	if (a)
	{
		while (a->next)
			a = a->next;
		a->next = begin_list2;
	}
	if (!*begin_list1)
		*begin_list1 = begin_list2;
}
