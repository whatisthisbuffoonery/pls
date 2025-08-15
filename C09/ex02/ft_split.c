/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 11:23:01 by dthoo             #+#    #+#             */
/*   Updated: 2025/08/14 05:25:13 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*index_2(int *count, char *str, char *charset, int i)
{
	int	k;
	int	m;
	int	*index;

	m = 0;
	index = malloc((*count + 2) * sizeof(int));
	while (str[++i])
	{
		k = -1;
		while (charset[++k])
		{
			if (str[i] == charset[k])
			{
				index[m++] = i;
				break ;
			}
		}
	}
	index[m] = 0;
	index[m + 1] = 0;
	return (index);
}

int	*get_index(char *str, char *charset, int *count)
{
	int	i;
	int	k;
	int	*index;

	i = 0;
	while (str[i])
	{
		k = -1;
		while (charset[++k])
		{
			if (str[i] == charset[k])
			{
				*count += 1;
				break ;
			}
		}
		i ++;
	}
	index = index_2(count, str, charset, -1);
	return (index);
}

char	*string(int one, int two, char *src)
{
	int		i;
	int		count;
	char	*dest;

	i = 0;
	count = two - one;
	if (one > -1)
		count ++;
	dest = malloc(count * sizeof(char));
	while (++one < two)
		dest[i++] = src[one];
	dest[i] = '\0';
	return (dest);
}

char	**splice(char **array, char *str, int *index, int len)
{
	int	m;
	int	k;
	int	i;

	k = 0;
	i = 0;
	if (index[0] == 0 && index[0] != index[1] - 1)
		array[k++] = string(index[0], index[1], str);
	if (index[0] != 0)
		array[k++] = string(-1, index[0], str);
	m = i + 1;
	while (index[m])
	{
		if (index[i] != index[m] - 1)
			array[k++] = string(index[i], index[m], str);
		m = ++i + 1;
	}
	if (index[i] < len - 1)
		array[k++] = string(index[i], len, str);
	array[k] = NULL;
	return (array);
}

char	**ft_split(char *str, char *charset)
{
	int		*index;
	char	**array;
	int		count;
	int		len;

	count = 0;
	len = 0;
	while (str[len])
		len ++;
	if (len == 0)
	{
		array = malloc(sizeof(char *));
		array[0] = NULL;
		return (array);
	}
	index = get_index(str, charset, &count);
	array = malloc((count + 2) * sizeof(char *));
	if (count == 0)
		array[0] = string(-1, len, str);
	else
		array = splice(array, str, index, len);
	return (array);
}

/*
#include <unistd.h>
int	main(void)
{
	int		i = 0;
	int		k = 0;
	char	src[50] = "never       gonna give you up     \0";
	char	sep[2] = " ";
	char	**dest;
	dest = ft_split(src, sep);
	while (dest[i])
	{
		k = 0;
		while (dest[i][k])
		{
			write(1, &dest[i][k], 1);
			k ++;
		}
		write(1, "\n", 1);
		i ++;
	}
}
*/
