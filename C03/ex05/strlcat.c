/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 11:16:39 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/17 18:11:32 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int size_dest;
	unsigned int size_src;
	unsigned int i;
	unsigned int j;
	unsigned int size_try;

	size_dest = 0;
	size_src = 0;
	j = 0;
	while (dest[size_dest] != '\0')
	{
		size_dest++;
	}
	i = size_dest;
	while (src[size_src] != '\0')
	{
		size_src++;
	}
	if (size >= size_dest + size_src - 1)
	{
		while (src[j])
		{
			dest[size_dest] = src[j];
			size_dest++;
			j++;
		}
		dest[size_dest] = '\0';
		size_try = i + size_src;
	}
	else 
	{
		size_try = size_src + i -1;
	}
	return (size_try);
}


int				main(void)
{
	char dest[20] = "yannah";
	char src[10] = "loohan";
	unsigned int size;

	size = 5;
	printf("dest = %s\n", dest);
	printf("src = %s\n", src);
	printf("retourne : %u \n", ft_strlcat(dest, src, size));
	printf("dest = %s", dest);
	return(0);
}

