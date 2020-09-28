/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract_side.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbanzizi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 15:49:05 by dbanzizi          #+#    #+#             */
/*   Updated: 2020/09/19 18:00:52 by mbennafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		**ft_create_int_tab(int size)
{
	int **sides;
	int i;

	i = 0;
	sides = malloc(sizeof(int *) * size);
	while (i < size)
	{
		sides[i] = malloc(size * sizeof(int));
		if (!sides[i])
			return (0);
		i++;
	}
	return (sides);
}

int		**ft_extract_side(char *str, int size)
{
	int i;
	int j;
	int **sides;
	int converted;

	sides = ft_create_int_tab(size);
	converted = 0;
	i = 0;
	j = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			converted = *str - '0';
			sides[j][i] = converted;
			i++;
		}
		if (i == size)
		{
			j++;
			i = 0;
		}
		str++;
	}
	return (sides);
}
