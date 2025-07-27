/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 03:25:58 by dthoo             #+#    #+#             */
/*   Updated: 2025/07/28 04:52:08 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		g_i;
int		g_e;
int		g_input_ln;

int	power_of_ten(int b)
{
	int		a;

	a = 1;
	if (b == 1)
	{
		return (a);
	}
	while (b > 1)
	{
		a *= 10;
		b --;
	}
	if (a != 1)
	{
		return (a);
	}
	else
		return (0);
}

void	print_helper(void)
{
	int		l;
	int		a;
	int		k;
	char	b;

	a = g_i;
	l = g_input_ln;
	while (l > 0)
	{
		k = power_of_ten(l);
		a /= k;
		b = a + 48;
		write (1, &b, 1);
		a = g_i % k;
		l --;
	}
	if (g_i != g_e)
	{
		write (1, ", ", 2);
	}
}

void	ping(int b)
{
	int		k;

	b += 1;
	k = power_of_ten (b + 1);
	while (g_i % k == g_e % k && b <= g_input_ln)
	{
		b ++;
		k = power_of_ten (b + 1);
	}
	k = g_i % power_of_ten (b);
	g_i -= k;
	g_i += power_of_ten (b);
	while (b > 1)
	{
		k = g_i % power_of_ten (b + 1);
		k /= power_of_ten (b);
		k ++;
		g_i += k * power_of_ten (b - 1);
		b --;
	}
	print_helper();
}

void	init_helper(int n)
{
	int		k;
	int		j;

	g_i = 0;
	g_e = 0;
	while (n > 0)
	{
		j = g_input_ln - n;
		k = power_of_ten(n);
		g_i += k * j;
		j = 10 - n;
		g_e += j * k;
		n --;
	}
	print_helper();
}

void	ft_print_combn(int n)
{
	int	i;
	int	r;

	if (n == 1)
		write (1, "0, 1, 2, 3, 4, 5, 6, 7, 8, 9", 28);
	if (n > 1)
	{
		g_input_ln = n;
		init_helper(n);
		while (g_i != g_e && g_i < g_e)
		{
			r = g_i % 10;
			while (r < 9)
			{
				r ++;
				g_i ++;
				print_helper();
			}
			ping(1);
		}
	}
}
