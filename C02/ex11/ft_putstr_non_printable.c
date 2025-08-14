/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:53:09 by dthoo             #+#    #+#             */
/*   Updated: 2025/08/11 17:43:41 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hex(unsigned char b)
{
	unsigned char	a;

	a = b / 16;
	b = b % 16;
	if (a < 10)
		a += 48;
	else
		a += 87;
	if (b < 10)
		b += 48;
	else
		b += 87;
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	char			a;
	unsigned char	b;

	i = 0;
	while (str[i])
	{
		b = str[i];
		if (!(b > 31 && b < 127))
		{
			a = 92;
			write(1, &a, 1);
			hex(b);
		}
		else
			write(1, &str[i], 1);
		i ++;
	}
}

/*
int	main(void)
{
	char	a[18] = "Hello\nHow are you?";
	ft_putstr_non_printable(a);
}
*/
