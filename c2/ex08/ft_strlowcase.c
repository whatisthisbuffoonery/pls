/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 20:40:32 by dthoo             #+#    #+#             */
/*   Updated: 2025/07/31 15:51:17 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] += 32;
		}
		i ++;
	}
	return (str);
}

int	main(void)
{
	char	swee[16] = "RETURN TO SENDER";
	int	i;
	char	a;

	i = 0;
	ft_strlowcase(swee);
	while (swee[i])
	{
		a = swee[i];
		write(1, &a, 1);
		i ++;
	}
	return (0);
}
