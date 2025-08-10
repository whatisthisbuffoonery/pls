/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 21:58:24 by dthoo             #+#    #+#             */
/*   Updated: 2025/08/10 07:41:59 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 65 || str[i] > 122)
		{
			return (0);
		}
		if (str[i] > 90 && str[i] < 97)
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
	char	a[20] = "a4pple";
	int	c = ft_str_is_alpha(a);
	char	b = c + 48;
	
	write(1, &b, 1);
}
*/
