/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:15:53 by dthoo             #+#    #+#             */
/*   Updated: 2025/08/06 16:16:19 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	while (i < 1)
	{
		i --;
		nb *= i;
	}
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	return (nb);
}
