/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 21:21:36 by dthoo             #+#    #+#             */
/*   Updated: 2025/07/31 21:51:12 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	hex[16];
	int		i;

	i = 0;
	while (i < 16)
	{
		hex[i] = i + 48;
		if (hex[i] > 57)
			hex[i] += 39; 
		i ++;
	}
	i = 0;
	if (size > 0)
	{
		//
	}
}

int	main(void)
{
	char	*str = "weeee";
	ft_print_memory(str)
