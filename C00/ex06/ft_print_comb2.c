/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 07:07:04 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/13 07:50:26 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_print_comb2(void)
{ 
	char b;
	char c; 

	b = '0';
	while(b <= '9')
	{
		c = '0';
		while( c<= '9')
		{
			ft_putchar(b);
			ft_putchar(c);
			if (b == '9' && c == '9')
			{
				;
			}
			else
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		c++;
		}
	b++;
	}	
}

int     main(void)
{
	ft_print_comb2();
	return (0);
}