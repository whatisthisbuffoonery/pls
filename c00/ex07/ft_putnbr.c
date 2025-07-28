/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:47:22 by dthoo             #+#    #+#             */
/*   Updated: 2025/07/28 02:02:51 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_actual_putnbr(long nb)
{
	char	b;

	if (nb < 0)
	{
		b = 45;
		write(1, &b, 1);
		nb = 0 - nb;
	}
	if (nb >= 10)
	{
		ft_actual_putnbr(nb / 10);
		ft_actual_putnbr(nb % 10);
	}
	if (nb < 10)
	{
		b = nb + 48;
		write(1, &b, 1);
	}
}

void	ft_putnbr(int nb)
{
	long	longjohns;

	longjohns = nb;
	ft_actual_putnbr(longjohns);
}
