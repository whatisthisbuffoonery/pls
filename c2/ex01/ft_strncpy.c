/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 21:08:17 by dthoo             #+#    #+#             */
/*   Updated: 2025/07/29 21:32:11 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] && n > 0)
	{
		dest[i] = src[i];
		i ++;
		n --;
	}
	while (n > 0)
	{
		dest[i] = '\0';
		i ++;
		n --;
	}
}

int	main(void)
{
	write(1, 'a', 1);
}
