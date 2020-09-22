/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 16:49:44 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/22 11:13:12 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int i;

	i = nb;
	if (i < 0)
	{
		ft_putchar('-');
		i *= -1;
	}
	if (i >= 10)
	{
		ft_putnbr(i / 10);
	}
	ft_putchar(i % 10 + '0');
}
