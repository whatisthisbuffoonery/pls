#include "ft_list.h"

t_list	*ft_create_elem(void *data);

t_list	*ft_list_push_strs(int size, char **strs)
{
	int i = 1;
	if (size < 1)
		return (0);
	t_list	*a = ft_create_elem(strs[0]);
	t_list	*b = a;
	while (i < size)
	{
		b->next = ft_create_elem(strs[i]);
		b = b->next;
		i ++;
	}
	return (a);
}
