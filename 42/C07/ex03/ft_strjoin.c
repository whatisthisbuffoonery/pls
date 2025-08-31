/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 15:17:12 by dthoo             #+#    #+#             */
/*   Updated: 2025/08/13 15:17:19 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	counting_too_hard(char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
		i ++;
	return (i);
}

void	seperate(char *dest, char *sep, int *a)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		dest[*a] = sep[i];
		*a += 1;
		i ++;
	}
}

char	*strpls(int size, char **strs, char *sep, int *a)
{
	char	*dest;
	int		k;
	int		i;

	k = counting_too_hard(sep);
	dest = malloc(*a + (k * (size - 1)) + 1);
	k = 0;
	*a = 0;
	while (k < size)
	{
		i = 0;
		while (strs[k][i])
		{
			dest[*a] = strs[k][i];
			i ++;
			*a += 1;
		}
		k ++;
		if (k < size)
			seperate(dest, sep, a);
	}
	return (dest);
}

int	make_a(char **strs, int size)
{
	int		i;
	int		k;
	int		a;

	a = 0;
	k = 0;
	while (k < size)
	{
		i = 0;
		while (strs[k][i])
			i ++;
		a += i;
		k ++;
	}
	return (a);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		a;
	char	*dest;

	a = 0;
	if (size <= 0)
	{
		dest = malloc(1);
		dest[0] = '\0';
		return (dest);
	}
	a = make_a(strs, size);
	dest = strpls(size, strs, sep, &a);
	dest[a] = '\0';
	return (dest);
}

/*
#include <unistd.h>
int	main(void)
{
	char *b[5] = {"1", "2", "3", "4"};
	char *a = ft_strjoin(4, b, "a");
	write(1, a, 7);
}
*/
