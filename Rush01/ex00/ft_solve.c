/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbanzizi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 09:52:06 by dbanzizi          #+#    #+#             */
/*   Updated: 2020/09/20 17:18:38 by mbennafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int		ft_check_value(int **tab, int x, int y, int **sides)
{
	int *top;
	int *bottom;
	int *left;
	int *right;

	top = sides[0];
	bottom = sides[1];
	left = sides[2];
	right = sides[3];
	if (!ft_check_duplicate(tab, x, y, SIZE)
			|| ft_check_top(tab, x, SIZE, top)
			|| (y == SIZE - 1 && ft_check_bottom(tab, x, SIZE, bottom))
			|| ft_check_left(tab, y, SIZE, left)
			|| (x == SIZE - 1 && ft_check_right(tab, y, SIZE, right)))
	{
		return (0);
	}
	return (1);
}

int		ft_solve(int **tab, int turn, int size, int **sides)
{
	int try;
	int x;
	int y;

	if (turn == size * size)
		return (1);
	y = turn / size;
	x = turn % size;
	try = 0;
	while (++try <= size)
	{
		tab[y][x] = try;
		if (ft_check_value(tab, x, y, sides))
		{
			if (ft_solve(tab, turn + 1, size, sides))
				return (1);
			tab[y][x] = 0;
		}
	}
	tab[y][x] = 0;
	return (0);
}
