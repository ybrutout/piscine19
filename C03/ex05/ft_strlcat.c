/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 11:16:39 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/21 08:10:21 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void			ft_size(char *dest, char *src, int *i, int *j)
{
	while (dest[*i] != '\0')
	{
		*i++;
	}
	while (src[*j] != '\0')
	{
		*j++;
	}
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	sd;
	int	ssrc;
	int	i;
	int	j;
	int	size_try;

	sd = 0;
	ssrc = 0;
	j = 0;
	ft_size(dest, src, &sd, &ssrc);
	i = sd;
	if ((int) size >= sd + ssrc - 1)
	{
		while (src[j])
		{
			dest[sd] = src[j];
			sd++;
			j++;
		}
		dest[sd] = '\0';
		size_try = i + ssrc ;
	}
	else
		size_try = ssrc + i -1;
	return (size_try);
}

int				main(void)
{
	char dest[20] = "yannah";
	char src[10] = "loohan";
	unsigned int size;

	size = 25;
	printf("dest = %s\n", dest);
	printf("src = %s\n", src);
	printf("retourne : %u \n", ft_strlcat(dest, src, size));
	printf("dest = %s", dest);
	return(0);
}
