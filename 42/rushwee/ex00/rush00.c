/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 13:13:10 by dthoo             #+#    #+#             */
/*   Updated: 2025/07/27 21:43:56 by dthoo            ###   ########.fr       */
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

void	corner(int i, int r)
{
	if (r == i)
	{
		write (1, "A", 1);
	}
	else
	{
		write (1, "C", 1);
	}
}

void	rush_00(int x, int y)
{
	write (1, "o", 1);
	width_r (x - 2, 45);
	if (x > 1)
	{
		write (1, "o", 1);
	}
	ft_putchar(10);
	height_r (y - 2, x, 124);
	if (y > 1)
	{
		write (1, "o", 1);
	}
	if (x > 1 && y > 1)
	{
		width_r (x - 2, 45);
		write (1, "o", 1);
	}
}

void	rush_01(int x, int y)
{
	char	a;

	a = 92;
	write (1, "/", 1);
	width_r (x - 2, 42);
	if (x > 1)
	{
		write (1, &a, 1);
	}
	ft_putchar (10);
	height_r (y - 2, x, 42);
	if (y > 1)
	{
		write (1, &a, 1);
	}
	if (x > 1 && y > 1)
	{
		width_r (x - 2, 42);
		write (1, "/", 1);
	}
}

void	rush_cereal(int x, int y, int r)
{
	write (1, "A", 1);
	width_r (x - 2, 66);
	if (x > 1)
	{
		corner (2, r);
	}
	ft_putchar (10);
	height_r (y - 2, x, 66);
	if (y > 1)
	{
		corner (3, r);
	}
	if (x > 1 && y > 1)
	{
		width_r (x - 2, 66);
		corner (4, r);
	}
}

void	rush(int x, int y)
{
	int		a;
	int		b;

	a = y / 1000;
	b = y % 1000;
	if (x == 0)
	{
		rush_00 (y / 1000, y % 1000);
	}
	if (x == 1)
	{
		rush_01 (y / 1000, y % 1000);
	}
	if (x > 1)
	{
		rush_cereal (y / 1000, y % 1000, x);
	}
	ft_putchar (10);
}
