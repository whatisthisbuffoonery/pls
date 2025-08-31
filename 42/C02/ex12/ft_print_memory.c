/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 20:10:24 by dthoo             #+#    #+#             */
/*   Updated: 2025/08/10 08:07:17 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	mem_print(unsigned long a, int flag)
{
	unsigned char	b;

	if (a > 15)
		mem_print(a / 16, flag + 1);
	if (a < 16)
	{
		while (flag < 15)
		{
			write(1, "0", 1);
			flag ++;
		}
	}
	b = (a % 16) + 48;
	if (a % 16 > 9)
		b = (a % 16) + 87;
	write(1, &b, 1);
}

void	hex_print(unsigned char a)
{
	unsigned char	b;

	b = (a / 16) + 48;
	if (a / 16 > 9)
		b = (a / 16) + 87;
	write(1, &b, 1);
	b = (a % 16) + 48;
	if (a % 16 > 9)
		b = (a % 16) + 87;
	write(1, &b, 1);
}

void	waa(unsigned char *a, int i, int k)
{
	while (i < k)
	{
		if (!(a[i] < 32 || a[i] > 126))
			write(1, &a[i], 1);
		else
			write(1, ".", 1);
		i ++;
	}
}

void	help_mem(unsigned char *src, int a, int k)
{
	int	i;

	i = 0;
	write(1, ": ", 2);
	while (i < k)
	{
		hex_print(src[i++]);
		if (i < k)
			hex_print(src[i++]);
		write(1, " ", 1);
	}
	a = (i * 2) + ((i + 1) / 2);
	while (a < 40)
	{
		write(1, " ", 1);
		a ++;
	}
	i = 0;
	waa(src, 0, k);
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int				i;
	unsigned int	k;
	unsigned char	*a;
	unsigned char	b[16];
	unsigned long	c;

	a = (unsigned char *)addr;
	k = 0;
	while (k < size)
	{
		i = 0;
		while (i < 16 && k < size)
		{
			b[i] = a[k];
			i ++;
			k ++;
		}
		c = (unsigned long)&a[k - i];
		mem_print(c, 0);
		help_mem(b, 0, i);
	}
	return (addr);
}

/*
int	main(void)
{
	ft_print_memory("I've come to make an announcement;"
	" Shadow The Hedgehog's a bitch ass motherfucker,"
	" he pissed on my fucking wife."
	" Thats right, "
	"he took his hedgehog quilly dick out and he pissed on my fucking wife"
	", and he said his dick was \0This big\0 and I said that's disgusting, "
	"so I'm making a callout post on my twitter dot com, "
	"Shadow the Hedgehog, you've got a small dick, "
	"it's the size of this walnut except WAY smaller, and guess what? "
	"Here's what my dong looks like: "
	"PFFFT, THAT'S RIGHT, BABY. ALL POINTS, NO QUILLS, NO PILLOWS. "
	"Look at that, it looks like two balls and a bong. "
	"He fucked my wife so guess what? I'm gonna fuck the Earth. "
	"THAT'S RIGHT THIS IS WHAT YOU GET, MY SUPER LASER PISS! "
	"Except I'm not gonna piss on the earth. I'm gonna go higher. "
	"I'M PISSING ON THE MOON! "
	"HOW DO YOU LIKE THAT, OBAMA? I PISSED ON THE MOON YOU IDIOT! "
	"YOU HAVE 23 HOURS BEFORE THE PISS DROPLETS HIT THE FUCKING EARTH"
	" NOW GET OUT OF MY SIGHT BEFORE I PISS ON YOU TOO.", 946);
}
*/
