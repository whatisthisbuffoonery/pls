/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 17:46:40 by dthoo             #+#    #+#             */
/*   Updated: 2025/07/28 04:28:08 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	g_h;
char	g_t;
char	g_o;

void	init(void)
{
	g_h = 48;
	g_t = 49;
	g_o = 50;
}

void	ft_print_comb(void)
{
	init();
	while (g_h < 56)
	{
		while (g_t < 57)
		{
			while (g_o < 58)
			{
				write (1, &g_h, 1);
				write (1, &g_t, 1);
				write (1, &g_o, 1);
				if (g_h < 55)
				{
					write (1, ", ", 2);
				}
				g_o ++;
			}
			g_t ++;
			g_o = g_t + 1;
		}
		g_h ++;
		g_t = g_h + 1;
		g_o = g_t + 1;
	}
}
