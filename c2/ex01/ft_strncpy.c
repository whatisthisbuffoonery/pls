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
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

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
	return (dest);
}

/*
#include <unistd.h>
int	main(void)
{
	char	a[20] = "apple";
	char	*b = "pie";
	int	i = 0;
	
	ft_strncpy(a, b, 4);
	while (a[i])
	{
		write(1, &a[i], 1);
		i ++;
	}
}
*/
