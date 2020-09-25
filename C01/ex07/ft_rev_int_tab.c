/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 20:19:17 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/25 07:42:58 by ybrutout         ###   ########.fr       */
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
