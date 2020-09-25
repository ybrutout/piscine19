/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 18:43:21 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/24 18:38:51 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	unsigned int	size;
	int				i;

	if (min >= max)
    {
        *range = NULL;
		return (0);
    }
	size = max - min;
	*range = malloc((sizeof(min)) * size);
	if (!(*range))
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}

int	main()
{
	int min = -15;
	int max = 100;
	int *arr;
	int count = ft_ultimate_range(&arr, min, max);
	printf("%i\n\n", count);
	int i;
	i = -1;
	while (++i < count)
		printf("%i\n", arr[i]);
}