/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 20:21:17 by dthoo             #+#    #+#             */
/*   Updated: 2025/07/30 20:38:03 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 65 || str[i] > 90)
		{
			return (0);
		}
		i ++;
	}
	return (1);
}

/*
#include <unistd.h>
int	main(void)
{
	char	a[20] = "IYGqsdDUYG";
	int	c = ft_str_is_uppercase(a);
	char	b = c + 48;
	
	write(1, &b, 1);
}
*/
