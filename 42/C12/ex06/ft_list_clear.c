#include <stdlib.h>
#include "ft_list.h"

void	free_why(void *a)
{
	free(a);
}

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list *a = begin_list->next;
	while (begin_list)
	{
		free_fct(begin_list);
		begin_list = a;
		if (a)
			a = begin_list->next;
	}
}
