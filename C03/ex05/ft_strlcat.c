/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 20:42:20 by dthoo             #+#    #+#             */
/*   Updated: 2025/08/07 20:42:25 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	a;
	unsigned int	b;

	i = 0;
	a = 0;
	b = 0;
	while (src[b])
		b ++;
	while (dest[a] && a < size)
		a ++;
	if (a == size)
		return (b + size);
	while (src[i] && size > ((a + i) + 1))
	{
		dest[a + i] = src[i];
		i ++;
	}
	if (a < size)
		dest[a + i] = '\0';
	return (a + b);
}

/*
#include <unistd.h>
int	main(void)
{
	char	dest[30] = "";
	char	src[13] = "yippie";
	unsigned int	a = ft_strlcat(dest, src, 30);
	char	b;
	if (a > 10)
	{
		b = (a / 10) + 48;
		write(1, &b, 1);
	}
	b = (a % 10) + 48;
	write(1, &b, 1);
	write(1, "\n", 1);
	int	i = 0;
	write(1, "what\n", 5);

	while (dest[i])
	{
		write(1, &dest[i], 1);
		i ++;
	}
	
}
*/
