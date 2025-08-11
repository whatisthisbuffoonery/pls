/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 05:20:40 by dthoo             #+#    #+#             */
/*   Updated: 2025/08/11 05:21:09 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i ++;
	}
	return (0);
}

void	print(int c, char **v)
{
	int	i;
	int	k;

	k = 0;
	i = 1;
	while (i < c)
	{
		k = 0;
		while (v[i][k])
		{
			write(1, &v[i][k], 1);
			k ++;
		}
		write(1, "\n", 1);
		i ++;
	}
}

int	main(int c, char **v)
{
	int		i;
	int		flag;
	char	*swap;

	i = 1;
	flag = 0;
	while (i < c - 1)
	{
		if (ft_strcmp(v[i], v[i + 1]) > 0)
		{
			swap = v[i];
			v[i] = v[i + 1];
			v[i + 1] = swap;
			flag ++;
		}
		i ++;
		if (flag > 0)
		{
			i = 1;
			flag = 0;
		}
	}
	print(c, v);
}
