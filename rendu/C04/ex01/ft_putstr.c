/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 16:43:58 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/25 08:01:38 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	long unsigned int	i;
	char				j;

	i = 0;
	while (str[i])
	{
		j = str[i];
		write(1, &j, 1);
		i++;
	}
}
