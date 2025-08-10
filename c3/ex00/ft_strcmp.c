/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 21:56:20 by dthoo             #+#    #+#             */
/*   Updated: 2025/07/31 22:37:46 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i ++;
	}
	return (0);
}

/*
#include <unistd.h>

int     main(void)
{
	char	*a = "appl";
	char	*b = "applz";
	int		c = ft_strncmp(a, b);
	char	d;

	if (c < 0)
	{
		write(1, "-", 1);
		c = 0 - c;
	}
	if (c > 99)
	{
		d = (c / 100) + 48;
		write(1, &d, 1);
		d = ((c / 10) % 10) + 48;
		write(1, &d, 1);
	}
	else if (c > 9)
	{
		d = (c / 10) + 48;
		write(1, &d, 1);
	}
	d = (c % 10) + 48;
	write(1, &d, 1);
}
*/
