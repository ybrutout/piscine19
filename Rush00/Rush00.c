/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 15:55:59 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/12 16:59:03 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    rush_negative(int *x, int *y)
{
	if (*x < 0)
		*x = 0 - *x;
	if (*y < 0)
		*y = 0 - *y;
}
void    rush(int x, int y)
{
	int i;
	int j;
	i = -1;
	j = -1;
	while (++j < y)
	{
		i = -1;
		while (++i < x)
		{
			if (j == 0 || j == y - 1 || i == 0 || i == x - 1)
			{
				if (((i == 0) && (j == 0)) || ((i == 0) && (j == y - 1)))
				{
					write(1, "o", 1);
				}
				else if ((i == x - 1 && j == 0) || (i == x - 1 && j == y - 1))
                {
                    write(1, "o", 1);
				}
				else if(j == 0 || j == y -1)
				{
					write(1, "-", 1);
				}
				else if( i == 0 || i == x - 1)
				{
					write(1, "|", 1);
				}
			}
			else
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}
int     main(void)
{
	rush(5, 5);
	return (0);
}