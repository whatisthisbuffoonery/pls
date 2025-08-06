/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 17:14:13 by dthoo             #+#    #+#             */
/*   Updated: 2025/08/06 17:15:31 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	check(char *str, char *charset, int i, int *c_num)
{
	int		k;

	k = 0;
	while (charset[k])
	{
		if ((str[i - 1] == charset[k]) && i != 0)
		{
			*c_num -= 1;
			return (1);
		}
		k ++;
	}
	return (0);
}

int	*c_init(char *str, char *charset, int i, int *c_num)
{
	int		*c;
	int		k;

	c = malloc(100);
	while (str[i])
	{
		k = 0;
		while (charset[k])
		{
			if (str[i] == charset[k])
			{
				c[*c_num] = i;
				k = -2;
				*c_num += 1;
				if (check(str, charset, i, &c_num))
					c[*c_num] = '\0';
			}
			k ++;
		}
		i ++;
	}
	c[*c_num] = '\0';
	return (c);
}

char	*ink(char *str, int start, int end)
{
	int		k;
	char	*temp;

	k = 0;
	temp = malloc(end - start);
	while (start < end)
	{
		temp[k] = str[start];
		start ++;
		k ++;
	}
	temp[k] = '\0';
	return (temp);
}

char	**split(char *str, int *c, char **dest, int flag)
{
	int		i;
	int		k;

	i = 0;
	k = 0;
	if (flag > 0)
	{
		dest[k] = ink(str, 0, c[i]);
		k ++;
	}
	while (c[i])
	{
		if (c[i] != c[i + 1] - 1)
		{
			dest[k] = ink(str, c[i] + 1, c[i + 1]);
			k ++;
		}
		i ++;
	}
	dest[k] = NULL;
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		*c;
	int		i;
	int		c_num;
	char	**dest;

	i = 0;
	c = c_init(str, charset, 0, &c_num);
	while (str[i])
		i ++;
	dest = malloc((i - c_num) + 1);
	if (c[0] != 0)
		i = 1;
	else
		i = 0;
	return (split(str, c, dest, i));
}
