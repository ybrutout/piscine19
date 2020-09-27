/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 16:28:26 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/25 07:44:18 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str)
{
	long unsigned int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int		main(void)
{
	char str[25] = "";
	
	printf("vrai = %lu\n", strlen(str));
	printf("test = %d\n", ft_strlen(str));
	return (0);
}
