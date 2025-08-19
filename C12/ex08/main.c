#include <unistd.h>
#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs);
void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
void	free_why(void *a);
void	ft_list_reverse(t_list **begin_list);

int	ft_strlen(char *a)
{
	int i = 0;
	while (a[i++]);
	return (i);
}

int	main(int c, char **v)
{
	t_list	*a = 0;
	if (c > 1)
	{
		a = ft_list_push_strs(c - 1, v + 1);
		ft_list_reverse(&a);
	}
	t_list	*b = a;
	write(1, "----\n", 5);
	while (b)
	{
		write(1, b->data, ft_strlen((char *)b->data));
		write(1, "\n", 1);
		b = b->next;
		write(1, "----\n", 5);
	}
	if (c > 1)
		ft_list_clear(a, free_why);
}
