/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 22:16:42 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/17 09:45:42 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h> 
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb )
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	char dest[20] = "yan";
	char src[8] = "loohan ";
	char s1[100] = "nahama ";
	unsigned int nb;

	nb = -1;
	printf("1 = %s\n", dest);
	printf("2 = %s\n", src);
	printf("3 = %s\n", s1);
	ft_strncat(dest, src, nb);
	printf("possibilité 1 = %s\n", dest);
	ft_strncat(dest, s1, nb);
	printf("possibilité 2 = %s\n", dest);
}