void	ft_list_push_last(t_list **begin_list, void *data)
{
	t_list	*a = *begin_list;
	while (a && a->next)
		a = a->next;
	if (*begin_list)
		(*a).next = ft_create_elem(data);
	else
		*begin_list = ft_create_elem(data);
}
