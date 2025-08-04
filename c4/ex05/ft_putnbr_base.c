/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:47:22 by dthoo             #+#    #+#             */
/*   Updated: 2025/08/01 16:47:28 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_atoi(char *str, int i, int flag, int a)
{
	while (str[i] == 32 || (str[i] > 8 && str < 14))
		i ++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			flag ++;
		i ++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		a *= 10;
		a = a + str[i] - 48;
		i ++;
	}
	if (flag % 2 == 1)
		a = 0 - a;
	return (a);
}

void	ft_actual_putnbr(long nb, char *base, int i, int *result)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = 0 - nb;
	}
	if (nb >= i)
	{
		ft_actual_putnbr(nb / i, base, i);
	}
	write(1, &base[nb % i], 1);
	//42 what you wan, int representation? ascii is base 128 helloooo
	//return (sum_shit);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		k;
	long	a;
	int	result;
	int		h;

	i = 0;
	h = 0;
	a = ft_atoi(str, 0, 0, 0)
	while (base[i])
	{
		k = 0;
		while(base[k])
		{
			if (base[k] == base[i])
				h ++;
			if (str[i] == 32 || (str[i] > 8 && str < 14))
				h ++;
			if (str[i] == 43 || str[i] == 45)
				h ++;
			k ++;
		}
		i ++;
	}
	if (i > 1 && h == 0)
		ft_actual_putnbr(a, base, i, &result);
}
