/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:59:25 by dthoo             #+#    #+#             */
/*   Updated: 2025/08/06 17:03:50 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*budget_log(int f, int i);

char	*flagger(int f, char *base_to, int i, int flag);

char	*init(int f, int t);

int		base_check(char *base);

int	ft_atoi(char *str, int *b, int flag)
{
	int		a;

	a = 0;
	while (str[*b] == 32 || (str[*b] > 8 && str[*b] < 14))
		*b += 1;
	while (str[*b] == 43 || str[*b] == 45)
	{
		if (str[*b] == 45)
			flag ++;
		*b += 1;
	}
	return (flag);
}

int	int_check(long a, int *f)
{
	*f = a;
	if (*f < a)
		return (1);
	return (0);
}

long	base_f(char *nbr, char *base, int k, int i)
{
	long	a;
	int		j;

	a = 0;
	j = 0;
	while (nbr[j])
	{
		k = 0;
		while (base[k])
		{
			if (nbr[j] == base[k])
			{
				a *= i;
				a += k;
				if (i == 1)
					a += 1;
				break ;
			}
			k ++;
		}
		j ++;
	}
	return (a);
}

char	*base_t(int f, char *base, int i, int index)
{
	char	*t;
	char	swap;
	int		k;

	t = budget_log(f, i);
	while (f > 0)
	{
		t[index] = base[f % i];
		index ++;
		f /= i;
	}
	k = 0;
	while (k < index / 2)
	{
		swap = t[k];
		t[k] = t[(index - k) - 1];
		t[(index - k) - 1] = swap;
		k ++;
	}
	return (t);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i;
	int		f;
	int		flag;
	int		b;

	b = 0;
	i = 0;
	flag = ft_atoi(nbr, &b, 0);
	while (base_from[i])
		i ++;
	if (base_check(base_from) || base_check(base_to))
		return (NULL);
	if (int_check(base_f(nbr, base_from, 0, i), &f))
		return (NULL);
	i = 0;
	while (base_to[i])
		i ++;
	return (flagger(f, base_to, i, flag % 2));
}

/*
int	main(void)
{
	char	nbr[2] = "5";
	char	from[11] = "0123456789";
	char	to[2] = "4";

	ft_convert_base(nbr, from, to);
}
*/
