/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:59:39 by dthoo             #+#    #+#             */
/*   Updated: 2025/08/14 05:26:22 by dthoo            ###   ########.fr       */
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
			if (base[k] == base[i] && i != k)
				return (1);
			if (base[i] == 32 || (base[i] > 8 && base[i] < 14))
				return (1);
			if (base[i] == 43 || base[i] == 45)
				return (1);
			k ++;
		}
		i ++;
	}
	if (i < 2)
	{
		return (1);
	}
	return (0);
}

char	*budget_log(int f, int t)
{
	int		digits;
	char	*str;
	int		i;

	i = 0;
	digits = 1;
	while (f > t)
	{
		f /= t;
		digits ++;
		if (t == 1)
			f --;
	}
	str = malloc(digits + 2);
	while (i < digits + 2)
		str[i++] = '\0';
	return (str);
}

/*
char	*unary(char *base, int number, int i)
{
	int		a;
	char	*b;

	a = 0;
	b = budget_log(number, i);
	while (a < number)
	{
		b[a] = base[0];
		a += 1;
	}
	return (b);
}
Down at line 97:
	if (i == 1)
		t = unary(base_to, f, i);
	else

Yes, I am very salty I worked for unary and they didn't want it.
*/

char	*flagger(int f, char *base_to, int i, int flag)
{
	int		k;
	char	*t;
	char	*actual;
	int		a;

	k = 1;
	a = 0;
	t = base_t(f, base_to, i, 0);
	if (flag % 2 != 0)
	{
		actual = budget_log(f, i);
		actual[0] = 45;
		while (t[a])
			actual[k++] = t[a++];
		free(t);
		actual[k] = '\0';
		return (actual);
	}
	return (t);
}
