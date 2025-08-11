/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:17:03 by dthoo             #+#    #+#             */
/*   Updated: 2025/08/06 16:17:09 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	i;
	
	i = nb;
	while (power > 1)
	{
		nb *= i;
		power --;
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb);
}
