/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 20:25:56 by dthoo             #+#    #+#             */
/*   Updated: 2025/07/30 20:38:29 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
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
	char	a[20] = "a4pp\nle";
	int	c = ft_str_is_printable(a);
	char	b = c + 48;
	
	write(1, &b, 1);
}
*/
