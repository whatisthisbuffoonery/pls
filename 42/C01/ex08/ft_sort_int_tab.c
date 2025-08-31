/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 10:09:56 by dthoo             #+#    #+#             */
/*   Updated: 2025/08/07 18:01:28 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	flag;
	int	swap;
	int	i;

	i = 0;
	size --;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			flag = 1;
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
		}
		i ++;
		if (flag == 1)
		{
			flag = 0;
			i = 0;
		}
	}
}

/*
int	main(void)
{
	int	a[5] = {2,3,9,7,6};
	int	*q;
	char	b;
	int	i;

	q = &a[0];
	i = 0;
	ft_int_sort_tab(q, 5);
	while (a[i])
	{
		b = 48;
		b += a[i];
		write(1, &b, 1);
		i ++;
	}
}
*/
