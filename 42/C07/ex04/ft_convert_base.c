/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:59:25 by dthoo             #+#    #+#             */
/*   Updated: 2025/08/14 05:26:19 by dthoo            ###   ########.fr       */
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

/*
down at line 71:
	if (i == 1)
		a += 1;
	break ;
*/

long	base_f(char *nbr, char *base, int b, int i)
{
	long	a;
	int		k;
	int		q;

	a = 0;
	while (nbr[++b])
	{
		k = -1;
		q = 1;
		while (base[++k])
		{
			if (nbr[b] == base[k])
			{
				a *= i;
				a += k;
				q = 0;
				break ;
			}
		}
		if (q)
			break ;
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
	if (!t[0])
		t[index++] = base[0];
	t[index] = '\0';
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
		return (0);
	if (check min)//+s in a base system without 's'
	if (int_check(base_f(nbr, base_from, b - 1, i), &f))
		return (0);
	i = 0;
	while (base_to[i])
		i ++;
	return (flagger(f, base_to, i, flag % 2));
}

/*
#include <unistd.h>
int	main(void)
{
	char	nbr[10] = "10";
	char	from[11] = "0123456789";
	char	to[11] = "0123456789";
	char *a = ft_convert_base(nbr, from, to);
	write(1, a, 8);
	write(1, "\nwhere", 6);
}
*/
