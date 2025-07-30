/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pain.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 21:09:49 by dthoo             #+#    #+#             */
/*   Updated: 2025/07/27 21:15:58 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rush(int x, int y);

int	check_r(char *v)
{
	if (v[1] < 48 || v[1] > 52 || v[0] != 48)
	{
		return (1);
		write (1, "hey, this rush number doesnt exist", 34);
	}
	else
	{
		return (0);
	}
}

int	check_d(char *v)
{
	int	i;

	i = 0;
	while (v[i])
	{
		if (v[0] == 45)
		{
			write (1, "no negative dimensions please\n", 30);
			return (1);
		}
		if (v[0] == 48)
		{
			write (1, "please don't start dimensions with 0\n", 37);
			return (1);
		}
		else if (v[0] < 48 || v[0] > 57)
		{
			write (1, "please use numbers\n", 19);
			return (1);
		}
		i ++;
	}
	return (0);
}

int	make_d(char *v, int f)
{
	int		a;
	int		i;

	i = 0;
	a = 0;
	while (v[i] > 47 && v[i] < 58)
	{
		a *= 10;
		a += v[i] - 48;
		i ++;
	}
	if (f != 0)
	{
		if (a > f)
		{
			return (-42);
		}
		else
			return (0);
	}
	else
		return (a);
}

int	welcome(int c)
{
	if (c > 4)
	{
		write (1, "too many arguments\n", 19);
		return (1);
	}
	if (c == 1)
	{
		write (1, "Hi! Input ./a.out with the rush number (0x),\n", 45);
		write (1, "followed by the x, then y, dimensions", 38);
		write (1, " (up to 3 digits: xxx),\n", 23);
		write (1, " all seperated with single spaces", 33);
		write (1, "\nmax x: 211, max y: 999\n", 25);
		return (1);
	}
	else if (c < 4)
	{
		write (1, "too few arguments\n", 18);
		return (1);
	}
	else
	{
		return (0);
	}
}

int	main(int c, char **v)
{
	int		rush_num;
	int		check;
	int		d;

	check = 0;
	check += welcome(c);
	if (check == 0)
	{
		check += check_r(v[1]);
		check += check_d(v[2]);
		check += check_d(v[3]);
		check += make_d(v[2], 211);
		check += make_d(v[3], 999);
	}
	if (check == 0)
	{
		d = make_d(v[2], 0) * 1000;
		d += make_d(v[3], 0);
		rush_num = v[1][1] - 48;
		rush(rush_num, d);
	}
	if (check < 0)
		write(1, "the screens here aren't that big\n", 33);
}
