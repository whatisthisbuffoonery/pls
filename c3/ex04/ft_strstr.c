/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 20:40:43 by dthoo             #+#    #+#             */
/*   Updated: 2025/08/07 20:40:50 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;

	k = 0;
	i = 0;
	if (!to_find[i])
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[k])
			k ++;
		else
		{
			i = i - k + 1;
			k = 0;
		}
		if (!(to_find[k]))
			return (&str[(i + 1) - k]);
		i ++;
	}
	return (0);
}

#include <unistd.h>

int     main(void)
{
        char    *a = "hehahheyeeeyhyyey";
        char    *b = "hey";
        char    *c = ft_strstr(a, b);
        write(1, c, 1);
}

