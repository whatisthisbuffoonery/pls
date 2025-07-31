/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 15:51:43 by dthoo             #+#    #+#             */
/*   Updated: 2025/07/31 16:28:31 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcapitalize(char *str)
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
	i = 0;
	while (str[i])
	{
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
		{
			if (str[i + 1] > 64 && str[i + 1] < 91)
			{
				str[i + 1] += 32;
			}
		}
		i ++;
	}
	return (str);
}
/*
int	main(void)
{
	char str[49] = "hi, how are you? 42words forty-two; fifty0and+one";
	int	i;

	i = 0;
	ft_strcapitalize(str);
	while (str[i])
	{
		write(1, &str[i], 1);
		i ++;
	}
}*/
