/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:28:15 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/16 17:28:15 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (j == i)
	{
		return (0);
	}
	else if (i > j)
	{
		return (1);
	}
	else if (i < j)
	{
		return (-1);
	}
	return (9);
}

int		main(void)
{
	char s1[30] = "coucoulesfilles";
	char s2[30] = "testestetststdfegvdvsvgs";
	char s3[30] = "123123456456789";
	char s4[30] = "hello";

	printf("solution (-1) = %d\n", ft_strcmp(s1, s2));
	printf("solution (0) = %d\n", ft_strcmp(s1, s3));
	printf("solution (1) = %d\n", ft_strcmp(s1, s4));
}