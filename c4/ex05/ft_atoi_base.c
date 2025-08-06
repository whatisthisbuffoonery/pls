/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:47:22 by dthoo             #+#    #+#             */
/*   Updated: 2025/08/06 16:15:15 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

long	ft_atoi(char *str, int k, char base, int *flag)
{
	long	a;
	int		i;

	a = 0;
	i = 0;
	while (str[i] == 32 || (str[i] > 8 && str < 14))
		i ++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			*flag += 1;
		i ++;
	}
	if (k == 1)
		return (unary(str, base, i));
	else
		return (actual_atoi(str, base, i, k));
}

long	actual_atoi(char *str, char *base, int i, int k)
{
	int		a;
	long	b;

	while (str[i])
	{
		a = 0;
		while (base[a])
		{
			if (str[i] == base[a])
			{
				b *= k;
				b += a;
				a = -2;
			}
			a ++;
			if (a > 0)
				return (b);
		}
		i ++;
	}
	return (b);
}

int	check_base(char *base, int *i, int k)
{
	while (base[i])
	{
		k = 0;
		while (base[k])
		{
			if (base[k] == base[i])
				return (1);
			if (base[i] == 32 || (base[i] > 8 && str < 14))
				return (1);
			if (base[i] == 43 || base[i] == 45)
				return (1);
			k ++;
		}
		i ++;
	}
	if (i < 1)
		return (1);
	return (0);
}

long	unary(char *str, char *base, int i)
{
	long	a;

	a = 0;
	while (str[i] == base[0])
	{
		a ++;
		i ++;
	}
	return (a);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		k;
	long	a;
	int		flag;

	i = 0;
	if (check_base(base, &i, 0))
		return (0);
	a = ft_atoi(str, i, base, &flag);
	if (flag % 2 == 1)
		a = 0 - a;
	i = a;
	if (i != a)
		return (0);
	return (i);
}
