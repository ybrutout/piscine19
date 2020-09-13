/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 07:56:35 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/13 14:33:18 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	long int b;

	b = nb; 
	if(b < 0)
	{
		b = - nb;
		ft_putchar('-');
	}	
	else 
	{
		a = nb
		if (a >10)
		{
			ft_putchar(48 + )
		}
		
	}
}

int		main(void)
{
	ft_putnbr(-4244564656);
	return (0);
}
