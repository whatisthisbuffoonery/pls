/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 13:09:32 by group             #+#    #+#             */
/*   Updated: 2025/07/26 17:41:33 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a)
{
	write (1, &a, 1);
}

void	height_r(int y, int x, char a)
{
	int	i;

	while (y > 0)
	{
		i = x;
		while (i > 0)
		{
			if (i == 1 || i == x)
			{
				ft_putchar(a);
			}
			else
			{
				ft_putchar(' ');
			}
			i --;
		}
		ft_putchar(10);
		y --;
	}
}

void	width_r(int x, char a)
{
	while (x > 0)
	{
		ft_putchar(a);
		x --;
	}
}
