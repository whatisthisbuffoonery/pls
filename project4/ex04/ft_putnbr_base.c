/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:47:22 by dthoo             #+#    #+#             */
/*   Updated: 2025/08/01 16:05:42 by dthoo            ###   ########.fr       */
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

void	ft_putnbr_base(int nbr, char *base)
{
	long	longjohns;
	int	i;

	i = 0;
	while (base[i])
		i ++;
	longjohns = nbr;
	if (i > 1)
		ft_actual_putnbr(longjohns, base, i);
}
