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

/*
long	unary(char *str, int i)
{
	long	a;

	a = 0;
	while (str[i])
	{
		a ++;
		i ++;
	}
	return (a);
}
*/

long	actual_atoi(char *str, char *base, int i, int k)
{
	int		a;
	long	b;

	b = 0;
	while (str[i])
	{
		a = 0;
		while (base[a])
		{
			if (str[i] == base[a])
			{
				b *= k;
				b += a;
				break ;
			}
			a ++;
		}
		i ++;
	}
	return (b);
}

long	ft_atoi(char *str, int k, char *base, int *flag)
{
	long	a;
	int		i;

	a = 0;
	i = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i ++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			*flag += 1;
		i ++;
	}
	return (actual_atoi(str, base, i, k));
}

int	check_base(char *base, int *i, int k)
{
	while (base[*i])
	{
		k = 0;
		while (base[k])
		{
			if ((base[k] == base[*i]) && k != *i)
				return (1);
			if (base[k] == 32 || (base[k] > 8 && base[k] < 14))
				return (1);
			if (base[k] == 43 || base[k] == 45)
				return (1);
			k ++;
		}
		*i += 1;
	}
	if (*i < 2)
		return (1);
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	long	a;
	int		flag;

	i = 0;
	flag = 0;
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
