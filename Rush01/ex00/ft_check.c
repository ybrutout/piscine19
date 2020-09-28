/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbanzizi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 16:22:56 by dbanzizi          #+#    #+#             */
/*   Updated: 2020/09/20 17:07:22 by mbennafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int		ft_check_duplicate(int **tab, int x, int y, int size)
{
	int index;

	if (!tab[y][x])
		return (0);
	index = y;
	while (index--)
		if (tab[y][x] == tab[index][x])
			return (0);
	index = y;
	while (++index < size)
		if (tab[y][x] == tab[index][x])
			return (0);
	index = x;
	while (index--)
		if (tab[y][x] == tab[y][index])
			return (0);
	index = x;
	while (++index < size)
		if (tab[y][x] == tab[y][index])
			return (0);
	return (1);
}

int		ft_check_top(int **tab, int x, int size, int *top)
{
	int y;
	int max;
	int v_box;
	int max_len;

	y = 0;
	max_len = size;
	v_box = 0;
	max = 0;
	while (y != max_len)
	{
		if (!tab[y][x])
			return (0);
		if (tab[y][x] > max)
		{
			max = tab[y][x];
			v_box++;
		}
		y++;
	}
	return (v_box > top[x]);
}

int		ft_check_bottom(int **tab, int x, int size, int *bottom)
{
	int y;
	int max;
	int v_box;
	int max_len;

	y = size - 1;
	max_len = -1;
	v_box = 0;
	max = 0;
	while (y != max_len)
	{
		if (!tab[y][x])
			return (0);
		if (tab[y][x] > max)
		{
			max = tab[y][x];
			v_box++;
		}
		y--;
	}
	return (v_box != bottom[x]);
}

int		ft_check_left(int **tab, int y, int size, int *left)
{
	int x;
	int v_box;
	int max_len;
	int max;

	max_len = size;
	x = 0;
	max = 0;
	v_box = 0;
	while (x != max_len)
	{
		if (tab[y][x] > max)
		{
			max = tab[y][x];
			v_box++;
		}
		x++;
	}
	return (v_box > left[y]);
}

int		ft_check_right(int **tab, int y, int size, int *right)
{
	int x;
	int max;
	int v_box;
	int max_len;

	max_len = -1;
	x = size - 1;
	v_box = 0;
	max = 0;
	while (x != max_len)
	{
		if (tab[y][x] > max)
		{
			max = tab[y][x];
			v_box++;
		}
		x--;
	}
	return (v_box != right[y]);
}
