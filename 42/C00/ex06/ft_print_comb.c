/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 17:46:40 by dthoo             #+#    #+#             */
/*   Updated: 2025/07/25 16:06:50 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	g_t;
int	g_o;

void	printing(int i)
{
	char	a;
	char	b;

	a = i / 10;
	b = i % 10;
	a = a + 48;
	b = b + 48;
	write (1, &a, 1);
	write (1, &b, 1);
}

void	init(void)
{
	g_t = 0;
	g_o = 1;
}

void	ft_print_comb(void)
{
	init();
	while (g_t < 99)
	{
		while (g_o < 100)
		{
			printing(g_t);
			write (1, " ", 1);
			printing(g_o);
			if (g_t < 98)
			{
				write (1, ", ", 2);
			}
			g_o ++;
		}
		g_t ++;
		g_o = g_t + 1;
	}
}
