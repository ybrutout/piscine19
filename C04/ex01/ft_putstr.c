/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 16:43:58 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/18 17:04:12 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
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

int		main(void)
{
	char str[25] = "yannahloohannahama";
	char str1[1] = "\n";

	ft_putstr(str);
	ft_putstr(str1);
	return (0);
}
