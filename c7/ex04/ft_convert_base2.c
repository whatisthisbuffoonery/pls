/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:59:39 by dthoo             #+#    #+#             */
/*   Updated: 2025/08/06 17:12:28 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*base_t(int f, char *base, int i, int index);

int	base_check(char *base)
{
	int		i;
	int		k;

	i = 0;
	k = 0;
	while (base[i])
	{
		k = 0;
		while (base[k])
		{
			if (base[k] == base[i])
				return (1);
			if (base[i] == 32 || (base[i] > 8 && base[i] < 14))
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

int	budget_log(int k, int correction)
{
	int		a;

	a = 0;
	if (correction == 0)
	{
		while (k > 0)
		{
			k /= 10;
			a ++;
		}
	}
	else
	{
		while (k > 10)
		{
			k /= 10;
			a ++;
		}
	}
	return (a);
}

char	*init(int f, int t)
{
	char	*str;
	int		i;
	int		k;

	i = 0;
	k = f / t;
	str = malloc(4 * k);
	while (i < k)
	{
		str[i] = '\0';
		i ++;
	}
	return (str);
}

char	*flagger(int f, char *base_to, int i, int flag)
{
	int		k;
	char	*t;
	char	*swap;
	char	*actual;

	k = 0;
	if (i == 1)
		unary(t, base_to, f, 1);
	else
		t = base_t(f, base_to, i, 0);
	if (flag != 0)
	{
		actual[k] = '-';
		k ++;
		while (t[k - 1])
		{
			actual[k] = t[k - 1];
			k ++;
		}
		return (actual);
	}
	return (t);
}

long	unary(char *nbr, char *base, int flag, int i)
{
	long	a;

	a = 0;
	if (i != 1 && flag == 0)
		return (base_f(nbr, base, 0, i));
	if (i == 1 && flag == 0)
	{
		while (nbr[i - 1])
		{
			a ++;
			i ++;
		}
		return (a);
	}
	while (flag > 0)
	{
		flag --;
		nbr[i - 1] = base[0];
		i ++;
	}
	return (0);
}
