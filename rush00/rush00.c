/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 13:13:10 by dthoo             #+#    #+#             */
/*   Updated: 2025/07/26 17:13:42 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

//char has a heartfelt hatred for being aligned with int.
//please take them to couples' counselling.
//any dependents should be put on a different tab.
//
//update: int is just being a sassy dunce.
//
//char 45  = "-"
//char 111 = "o"
//char 124 = "|"

void	width_r(int x, char a);

void	height_r(int y, int x, char a);

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int		i;

	i = 1;
	write (1, "o", 1);
	width_r (x - 2, '-');
	if (x > 1)
	{
		write (1, "o", 1);
	}
	ft_putchar(10);
	height_r (y - 2, x, '|');
	if (y > 1)
	{
		write (1, "o", 1);
	}
	if (x > 1 && y > 1)
	{
		width_r (x - 2, '-');
		write (1, "o", 1);
	}
}

void	rush_01(int x, int y)
{
	int		i;

	i = 1;
	write (1, "/", 1);
	width_r (x - 2, '*');
	if (x > 1)
	{
		write (1, "\\", 1);
		ft_putchar('\n');
	}
	height_r (y - 2, x, '*');
	if (y > 1)
	{
		write (1, "\\", 1);
	}
	if (x > 1 && y > 1)
	{
		width_r (x - 2, '*');
		write (1, "/", 1);
	}
}

void	rush_02(int x, int y)
{
	int		i;

	i = 1;
	write (1, "A", 1);
	width_r (x - 2, 'B');
	if (x > 1)
	{
		write (1, "A", 1);
		ft_putchar('\n');
	}
	height_r (y - 2, x, 'B');
	if (y > 1)
	{
		write (1, "C", 1);
	}
	if (x > 1 && y > 1)
	{
		width_r (x - 2, 'B');
		write (1, "C", 1);
	}
}

void	rush_03(int x, int y)
{
	int		i;

	i = 1;
	write (1, "A", 1);
	width_r (x - 2, 'B');
	if (x > 1)
	{
		write (1, "C", 1);
		ft_putchar('\n');
	}
	height_r (y - 2, x, 'B');
	if (y > 1)
	{
		write (1, "A", 1);
	}
	if (x > 1 && y > 1)
	{
		width_r (x - 2, 'B');
		write (1, "C", 1);
	}
}

void	rush_04(int x, int y)
{
	int		i;

	i = 1;
	write (1, "A", 1);
	width_r (x - 2, 'B');
	if (x > 1)
	{
		write (1, "C", 1);
		ft_putchar('\n');
	}
	height_r (y - 2, x, 'B');
	if (y > 1)
	{
		write (1, "C", 1);
	}
	if (x > 1 && y > 1)
	{
		width_r (x - 2, 'B');
		write (1, "A", 1);
	}
}
