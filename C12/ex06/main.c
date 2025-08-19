#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs);
void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
void	free_why(void *a);

int	main(int c, char **v)
{
	t_list	*a = 0;
	if (c > 1)
	{
		a = ft_list_push_strs(c - 1, v + 1);
		ft_list_clear(a, free_why);
	}
}
