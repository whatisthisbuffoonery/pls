/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 21:36:13 by dthoo             #+#    #+#             */
/*   Updated: 2025/07/29 21:57:07 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <unistd.h>
int	main(void)
{
	char	a[20] = "apple";
	char	*b = "pie";
	int	i = 0;
	char	*c = ft_strcpy(a, b);
	
	while (c[i])
	{
		write(1, &c[i], 1);
		i ++;
	}
}
*/
