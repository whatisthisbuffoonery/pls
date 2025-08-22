#include <unistd.h>
#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs);
t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());
void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
void	free_why(void *a);
void	ft_list_reverse(t_list **begin_list);
void    ft_list_foreach(t_list *begin_list, void (*f)(void *));
void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *));

int	cmp_why(void *a, void *b)
{
	unsigned char *c = (unsigned char *)a;
	unsigned char *d = (unsigned char *)b;
	int i = 0;

	while (c[i] && c[i] == d[i])
		i ++;
	if (c[i] != d[i])
		return (1);
	return (0);
}

void	ft_putstr(void *a)
{
	char *b = (char *)a;
	int i = 0;

	while (b[i])
		write(1, &b[i++], 1);
	write(1, "\n----\n", 6);
}

int	ft_strlen(char *a)
{
	int i = 0;
	while (a[i++]);
	return (i);
}

int	main(int c, char **v)
{
	t_list	*a = 0;
	t_list	*b = 0;
	char	*caca = "quebec";
	if (c > 1)
	{
		a = ft_list_push_strs(c - 1, v + 1);
		ft_list_reverse(&a);
	}
	b = ft_list_find(a, caca, cmp_why);
	if (b)
	{
		write(1, "found item\n", 11);
		ft_list_remove_if(&a, caca, cmp_why, free_why);
	}
	if (c > 1)
		write(1, "----\n", 5);
	ft_list_foreach(a, ft_putstr);
	if (c > 1)
		ft_list_clear(a, free_why);
}
