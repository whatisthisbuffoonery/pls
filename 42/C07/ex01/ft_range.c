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

/*
#include <unistd.h>

int	main(void)
{
	int *a = ft_range(1, 6);//no, moulimette did not mark wrong for not
				//taking '0' as a required output
				//also also they took (NULL)
	int i;
	char b;
	i = 0;
	while (a[i])
	{
		b = a[i] + 48;
		write(1, &b, 1);
		write(1, "\n", 1);
		i ++;
	}
}
*/
