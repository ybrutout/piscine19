/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 21:57:23 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/25 07:44:02 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

int		main(void)
{
	char base[21] = "coucou";
	char s1[11] = "quoidebeau";
	char s2[11] = "tuvasbiddd";
	char s3[2] = "";

	printf("base : %s\n", base);
	printf("s1 : %s\n", s1);
	printf("s2 : %s\n", s2);
	printf("s3 : %s\n", s3);
	printf("base et s1 %s\n", ft_strcat(base, s1));
	printf("base et s2 %s\n", ft_strcat(base, s2));
	printf("base et s3 %s\n", ft_strcat(base, s3));
	printf("s3 et base %s\n", ft_strcat(s3, base));
}