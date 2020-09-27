/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:28:15 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/25 07:43:56 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i; 
	int j;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] != s2[i])
	{
		j = s1[i] - s2[i];
	}
	else 
	{
		j = 0;
	}
	return (j);
}

int		main(void)
{
	char s1[30] = "coucoulesfilles";
	char s2[30] = "cnucoulesfilles";
	char s3[30] = "coucoulesfilles";
	char s4[30] = "coucoulesfilles";
	char s5[30] = "";
	char s6[30] = "";
	char s7[30] = "coucoulesfillesyannah";

	printf("solution (-) = %d\n", ft_strcmp(s1, s2));
	printf("solution (+) = %d\n", ft_strcmp(s1, s3));
	printf("solution (0) = %d\n", ft_strcmp(s1, s4));
	printf("solution (?) = %d\n", ft_strcmp(s1, s5));
	printf("solution (?) = %d\n", ft_strcmp(s5, s6));
	printf("solution (?) = %d\n", ft_strcmp(s6, s1));
	printf("solution (?) = %d\n", ft_strcmp(s1, s7));
	printf("solution (?) = %d\n", ft_strcmp(s7, s1));
    return(0);
}