/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 20:19:17 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/15 08:49:39 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int d;
	int c;
	int j;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		c = tab[i];
		d = tab[j];
		tab[i] = d;
		tab[j] = c;
		i++;
		j--;
	}
	tab[size] = '\0';
}
