/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbanzizi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 11:16:17 by dbanzizi          #+#    #+#             */
/*   Updated: 2020/09/20 17:06:37 by mbennafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		**ft_create_table(int size)
{
	int	**tab;
	int	i;
	int	j;

	tab = malloc(size * sizeof(int *));
	if (!tab)
		return (NULL);
	i = -1;
	while (++i < size)
	{
		tab[i] = malloc(size * sizeof(int));
		if (!tab[i])
			return (0);
		j = -1;
		while (++j < size)
			tab[i][j] = 0;
	}
	return (tab);
}
