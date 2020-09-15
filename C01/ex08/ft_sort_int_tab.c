/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 07:06:33 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/15 07:25:24 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int a;
	int b;
	int c;

	a = 0;
	b = a + 1;
	while (a < size)
	{
		if (tab[a] > tab[b])
		{
			c = tab[a];
			tab[a] = tab[b];
			tab[b] = c;
			a = 0;
			b = a + 1;
		}
		else
		{
			a = a + 1;
			b = a + 1;
		}
	}
}
