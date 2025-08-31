/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 20:39:38 by dthoo             #+#    #+#             */
/*   Updated: 2025/08/07 20:39:43 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (dest[a])
		a ++;
	while (src[i])
	{
		dest[a + i] = src[i];
		i ++;
	}
	dest[a + i] = '\0';
	return (dest);
}

/*
#include <unistd.h>

int     main(void)
{
        char    a[10] = "aaaaa";
        char    *b = "bbb";
        char    *c = ft_strcat(a, b);
        int	i = 0;
        while (c[i])
        {
        	write(1, &c[i], 1);
        	i ++;
        }
}
*/
