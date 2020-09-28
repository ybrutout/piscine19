/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 12:10:41 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/20 18:03:34 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	ft_print_tab(int **tab, int size)
{
	int i;
	int j;

	i = -1;
	while (++i < size)
	{
		j = -1;
		while (++j < size)
		{
			ft_putchar(tab[i][j] + '0');
			if (j < size - 1)
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
