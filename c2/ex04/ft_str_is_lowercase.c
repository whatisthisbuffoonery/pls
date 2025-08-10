/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 20:06:57 by dthoo             #+#    #+#             */
/*   Updated: 2025/07/30 20:38:52 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 97 || str[i] > 122)
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
	char	a[20] = "appQle";
	int	c = ft_str_is_lowercase(a);
	char	b = c + 48;
	
	write(1, &b, 1);
}
*/
