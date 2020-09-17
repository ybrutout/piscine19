/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 11:16:39 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/17 14:30:20 by ybrutout         ###   ########.fr       */
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

	size_dest = 0;
	size_src = 0;
	i = 0;
	j = 0;
	while (dest[size_dest] != '\0')
	{
		size_dest++;
	}
	while (src[size_src] != '\0')
	{
		size_src++;
	}
	while (src[j])
	{
		
	}



}

int				main(void)
{
	char dest[10] = "yannah";
	char src[10] = "loohan";
	unsigned int size;

	size = 5;
	printf("dest = %s\n", dest);
	printf("src = %s\n", src);
	printf("retourne : %lu \n", ft_strlcat(dest, src, size));
	return(0);
}

