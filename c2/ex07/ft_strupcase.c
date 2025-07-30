/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 20:40:32 by dthoo             #+#    #+#             */
/*   Updated: 2025/07/30 21:44:44 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] -= 32;
		}
		i ++;
	}
	return (str);
}
/*
int	main(void)
{
	char	swee[16] = "return to sender";
	int	i;
	char	a;

	i = 0;
	ft_strupcase(swee);
	while (swee[i])
	{
		a = swee[i];
		write(1, &a, 1);
		i ++;
	}
	return (0);
}*/
