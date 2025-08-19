#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list *a = malloc(sizeof(t_list));
	a->next = NULL;
	a->data = data;
	return (a);
}
