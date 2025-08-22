#include <stdlib.h>
#include <unistd.h>
#include "ft_list.h"

void	free_why(void *a)
{
	free(a);
}

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list *a = 0;
	if (begin_list)
		a = begin_list->next;
	if (!begin_list)
		write(1, "\n*****\nft_list_clear says:\nwrong free() pointer dipshit\n*****\n", 62);
	while (begin_list)
	{
		free_fct(begin_list);
		begin_list = a;
		if (a)
			a = begin_list->next;
	}
}
