/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:17:24 by dthoo             #+#    #+#             */
/*   Updated: 2025/08/06 16:17:28 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	if (power > 1)
		nb *= ft_recursive_power(nb, power - 1);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb);
}
