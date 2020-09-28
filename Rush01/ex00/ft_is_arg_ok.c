/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_arg_ok.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 18:12:32 by mbennafl          #+#    #+#             */
/*   Updated: 2020/09/20 17:53:34 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	ft_is_arg_ok(char *str)
{
	int i;
	int j;

	i = 0;
	j = 1;
	if (ft_strlen(str) != 31)
		return (0);
	while (str[i] >= '1' && str[i] <= '4' && i < 31)
	{
		if (!(str[i] >= '1' && str[i] <= '4'))
			return (0);
		i = i + 2;
	}
	while (str[j] == ' ' && j < 31)
	{
		if (!(str[j] == ' '))
			return (0);
		j = j + 2;
	}
	if (i == 32 && j == 31)
		return (1);
	else
		return (0);
}
