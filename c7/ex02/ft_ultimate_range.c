/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:48:16 by dthoo             #+#    #+#             */
/*   Updated: 2025/08/06 16:58:17 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	range[0] = malloc(sizeof(int) * (max - min));
	if (!range[0])
		return (-1);
	while (min < max)
	{
		range[0][i] = min;
		min ++;
		i ++;
	}
	return (range[0]);
}
