/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 09:38:56 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/15 12:19:02 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	n = 0;
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = src[n];
	return (dest);
}

int		main(void)
{
	char dest[] = "yannah";
	char src[] = "loohan";
	unsigned int n;

	n = 7;
	ft_strncpy(dest, src, n);
	printf("%s\n" ,dest);
	return(0);
}