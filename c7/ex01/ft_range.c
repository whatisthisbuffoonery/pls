/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:40:48 by dthoo             #+#    #+#             */
/*   Updated: 2025/08/06 16:44:09 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	i = 0;
	if (min >= max)
		return (NULL);
	arr = malloc(4 * (max - min));
	if (!arr)
		return (NULL);
	while (min < max)
	{
		arr[i] = min;
		min ++;
		i ++;
	}
	return (arr);
}
