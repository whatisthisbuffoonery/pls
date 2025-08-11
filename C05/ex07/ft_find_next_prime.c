/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:18:38 by dthoo             #+#    #+#             */
/*   Updated: 2025/08/06 16:18:42 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i ++;
	}
	if (nb < 2)
		return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (!(ft_is_prime(nb)))
		nb = ft_find_next_prime(nb + 1);
	return (nb);
}
