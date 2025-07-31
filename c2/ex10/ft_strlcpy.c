/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 16:33:03 by dthoo             #+#    #+#             */
/*   Updated: 2025/07/31 17:51:33 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	while (src[i] && size > 1)
	{
		dest[i] = src[i];
		i ++;
		size --;
	}
	dest[i] = '\0';
	if (src[i])
	{
		while (src[i])
		{
			i ++;
		}
	}
	return (i);
}
/*
int	main(void)
{
	char	src[10] = "1234567890";
	char	dest[15] = "aaabbbcccdddeee";
	int	i = 0;
	int	a = 0;
	char	b;
	int	r = 15;

	a = ft_strlcpy(dest, src, 5); //change size here
	while (r > 0)
	{
		write (1, &dest[i], 1);
		i ++;
		r --;
	}
	write (1, "\n", 1);
	b = a / 10;
	b += 48;
	write (1, &b, 1);
	b = a % 10;
	b += 48;
	write (1, &b, 1);
}*/
