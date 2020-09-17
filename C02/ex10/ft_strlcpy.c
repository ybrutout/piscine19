/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 12:45:24 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/17 16:11:21 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i = i + 1;
	}

	while (size != '\0' && src[j] != '\0' && j < size)
	{
		dest[j] = src[j];
		j++; 
	}
	dest[size] = '\0'; 
	return(i);
}

int				main(void)
{
	char dest[15] = "HelloNahama";
	char src[40] = "HelloLoohan et Nahama";
	unsigned int size;

	size = 20;
	printf("C'était : %s\n", dest);
	ft_strlcpy(dest, src, size);
	printf("C'est : %s\n", dest);
	return (0);
}