/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 15:35:47 by dthoo             #+#    #+#             */
/*   Updated: 2025/08/08 16:32:35 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		len;

	i = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*dup;
	int		i;

	len = ft_strlen(src);
	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

void	assign(char *from, t_stock_str *to)
{
	if (from)
	{
		to->size = ft_strlen(from);
		to->str = from;
		to->copy = ft_strdup(from);
	}
	else
	{
		to->size = 0;
		to->str = (NULL);
		to->copy = (NULL);
	}
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*array;
	int			i;
	int			j;

	array = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (i < ac) //make this into another func
	{
		assign(av[i], &array[i]);
		if (!array[i].copy)
		{
			j = 0;
			while (j < i)
			{
				free(array[j].copy);
				j++;
			}
			free(array);
			return (NULL);
		}
		i++;
	}
	assign("", &array[ac]);
	return (array);
}
