/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 05:41:27 by dthoo             #+#    #+#             */
/*   Updated: 2025/08/14 15:45:07 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i ++;
	}
}

void	ft_actual_putnbr(long nb)
{
	char	b;

	if (nb < 0)
	{
		b = 45;
		write(1, &b, 1);
		nb = 0 - nb;
	}
	if (nb > 9)
		ft_actual_putnbr(nb / 10);
	b = (nb % 10) + 48;
	write(1, &b, 1);
}

void	ft_putnbr(int nb)
{
	long	longjohns;

	longjohns = nb;
	ft_actual_putnbr(longjohns);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != NULL)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i ++;
	}
}
