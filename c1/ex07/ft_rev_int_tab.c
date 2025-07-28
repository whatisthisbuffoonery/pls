/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 09:04:39 by dthoo             #+#    #+#             */
/*   Updated: 2025/07/28 10:10:36 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	k;

	a = size / 2;
	i = 0;
	size --;
	while (i != a)
	{
		k = tab[i];
		tab[i] = tab[size - i];
		tab[size - i] = k;
		i ++;
	}
}
