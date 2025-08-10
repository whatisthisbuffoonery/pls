/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 20:41:20 by dthoo             #+#    #+#             */
/*   Updated: 2025/08/07 20:41:23 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	a;

	i = 0;
	a = 0;
	while (dest[a])
		a ++;
	while (i < nb && src[i])
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
        char    *c = ft_strncat(a, b, 2);
        int	i = 0;
        while (c[i])
        {
        	write(1, &c[i], 1);
        	i ++;
        }
}
*/
