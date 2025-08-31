/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:47:22 by dthoo             #+#    #+#             */
/*   Updated: 2025/08/06 16:09:57 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_actual_putnbr(long nb, char *base, int i)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = 0 - nb;
	}
	if (nb >= i)
	{
		ft_actual_putnbr(nb / i, base, i);
	}
	write(1, &base[nb % i], 1);
}

/*
void	unary(long a)
{
	while (a < 0)
	{
		write(1, "1", 1);
		a --;
	}
}
*/

int	check_base(char *base, int i, int k)
{
	while (base[i])
	{
		k = 0;
		while (base[k])
		{
			if ((base[k] == base[i]) && i != k)
				return (0);
			k ++;
		}
		if (base[i] == 32 || (base[i] > 8 && base[i] < 14))
			return (0);
		if (base[i] == 43 || base[i] == 45)
			return (0);
		i ++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	longjohns;
	int		i;

	i = 0;
	while (base[i])
		i ++;
	if (check_base(base, 0, 0) && i > 0)
	{
		longjohns = nbr;
		if (i > 1)
			ft_actual_putnbr(longjohns, base, i);
	}
}

/*
int	main(void)
{
	ft_putnbr_base(12345, "aeiou");
}
*/
