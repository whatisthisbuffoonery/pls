/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:18:59 by dthoo             #+#    #+#             */
/*   Updated: 2025/08/06 16:31:07 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	horizontal(int arr[10], int i)
{
	int	a;

	a = 0;
	while (a < 10)
	{
		if (arr[i] == arr[a] && i != a)
			return (1);
		a ++;
	}
	return (0);
}

int	diag(int arr[10], int i, int b, int a)
{
	while (a < 10)
	{
		b = a - i;
		if ((arr[i] + b == arr[a] || arr[i] - b == arr[a]) && a != i)
			return (1);
		a ++;
	}
	return (0);
}

int	check(int arr[10], int i, char a, int *count)
{
	if (horizontal(arr, i) || diag(arr, i, 0, 0))
		return (0);
	i = 0;
	while (i < 10)
	{
		if (arr[i] < 0)
			return (1);
		i ++;
	}
	i = 0;
	while (i < 10)
	{
		a = arr[i] + 48;
		write(1, &a, 1);
		i ++;
	}
	write(1, "\n", 1);
	*count += 1;
	return (1);
}

void	recursion(int arr[10], int i, int value, int *count)
{
	while (value < 10 && i < 10)
	{
		arr[i] = value;
		if (check(arr, i, 0, count))
			recursion(arr, i + 1, 0, count);
		value ++;
	}
	arr[i] = -42;
}

int	ft_ten_queens_puzzle(void)
{
	int	arr[10];
	int	count;

	count = 0;
	while (count < 10)
	{
		arr[count] = -42;
		count ++;
	}
	count = 0;
	recursion(arr, 0, 0, &count);
	return (count);
}

#include <stdio.h>
int	main(void)
{
	int a = ft_ten_queens_puzzle();
	printf("%d", a);
	printf("%c", '\n');
}

