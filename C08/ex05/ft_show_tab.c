/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 07:24:43 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/28 12:25:21 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		ft_putchar(str[a]);
		a++;
	}
}

void		ft_putnbr(int nb)
{
	long int a;

	a = nb;
	if (a < 0)
	{
		ft_putchar('-');
		a *= -1;
	}
	if (a >= 10)
	{
		ft_putnbr(a / 10);
	}
	ft_putchar(a % 10 + 48);
}

void		ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	if (!(par))
		return ;
	while ((par[i]).str)
	{
		ft_putstr((par[i]).str);
		ft_putchar('\n');
		ft_putnbr((par[i]).size);
		ft_putchar('\n');
		ft_putstr((par[i]).copy);
		ft_putchar('\n');
		i++;
	}
}

int					main(int argc, char **argv)
{
	ft_show_tab(ft_strs_to_tab(argc -1, argv +1));
}
