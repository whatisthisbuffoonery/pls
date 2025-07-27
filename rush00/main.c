/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtay <thtay@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 14:44:03 by thtay             #+#    #+#             */
/*   Updated: 2025/07/26 15:14:23 by thtay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(void);

void	rush_00(int x, int y);

void	rush_01(int x, int y);

void	rush_02(int x, int y);

void	rush_03(int x, int y);

void	rush_04(int x, int y);

int	main(void)
{
	rush_00(5, 5);
	write(1, "\n", 1);
	rush_01(5, 5);
	write(1, "\n", 1);
	rush_02(5, 5);
	write(1, "\n", 1);
	rush_03(5, 5);
	write(1, "\n", 1);
	rush_04(5, 5);
	return (0);
}
