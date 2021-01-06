/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 20:45:31 by ybrutout          #+#    #+#             */
/*   Updated: 2020/11/18 13:12:35 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i; 
	int j;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n)
	{
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

int		main(void)
{
	char s1[30] = "heloonjkj";
	char s2[30] = "\n\t";
	char s3[30] = "coucouélesfilles";
	char s4[30] = "coucoulesfilles";
	char s5[30] = "";
	char s6[30] = "";
	char s7[30] = "cou";
	unsigned int n;

	n = 0;

	printf("solution (-) = %d\n", ft_strncmp(s1, s2, n));
	printf("solution (+) = %d\n", ft_strncmp(s1, s3, n));
	printf("solution (0) = %d\n", ft_strncmp(s1, s4, n));
	printf("solution (?) = %d\n", ft_strncmp(s1, s5, n));
	printf("solution (?) = %d\n", ft_strncmp(s5, s6, n));
	printf("solution (?) = %d\n", ft_strncmp(s6, s1, n));
	printf("solution (?) = %d\n", ft_strncmp(s1, s7, n));
	printf("solution (?) = %d\n", ft_strncmp(s7, s1, n));
    return(0);
}