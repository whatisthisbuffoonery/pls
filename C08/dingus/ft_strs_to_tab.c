/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:07:02 by dthoo             #+#    #+#             */
/*   Updated: 2025/08/13 20:07:38 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par);

t_stock_str	item(char *src)
{
	int		i;
	t_stock_str	a;
	char	*dup;
	
	i = 0;
	while (src[i])
		i ++;
	a.size = i;
	dup = malloc((i + 1) * sizeof(char));
	dup[i] = '\0';
	i = 0;
	a.str = src;
	while (src[i])
	{
		dup[i] = src[i];
		i ++;
	}
	a.copy = dup;
	return (a);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*t;
	int		i;
	
	i = 0;
	if (ac < 1)
	{
		t = malloc(sizeof(t_stock_str));
		t[i].size = 0;
		t[i].str = 0;
		t[i].copy = 0;
		return (t);
	}
	t = malloc((ac + 1) * sizeof(t_stock_str));
	while (i < ac)
	{
		t[i] = item(av[i]);
		i ++;
	}
	t[i].size = 0;
	t[i].str = 0;
	t[i].copy = 0;
	return (t);
}

int	main(int c, char **v)
{
	t_stock_str *a = ft_strs_to_tab(c - 1, v + 1);//??????
	ft_show_tab(a);
}
	

