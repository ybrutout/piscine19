/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 07:07:04 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/24 19:35:09 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_if(int y, int z)
{
	if (y < z)
	{
		ft_putchar('0' + y / 10);
		ft_putchar(y % 10 + '0');
		ft_putchar(' ');
		ft_putchar(z / 10 + '0');
		ft_putchar(z % 10 + '0');
		if (y != 98)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb2(void)
{
	int y;
	int z;

	y = 0;
	while (y < 99)
	{
		z = 0;
		while (z <= 99)
		{
			ft_if(y, z);
			z++;
		}
		y++;
	}
}
