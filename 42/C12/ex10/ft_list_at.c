#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int i = 0;
	if (!begin_list)
		return (NULL);
	while (i < nbr && begin_list)
	{
		begin_list = begin_list->next;
		i ++;
	}
	if (i != nbr)
		return (NULL);
	return (begin_list);
}
