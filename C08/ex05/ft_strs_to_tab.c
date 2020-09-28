/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 14:35:33 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/28 11:09:37 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

char				*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

int					ft_strlen(char *str)
{
	int				a;

	a = 0;
	while (str[a])
	{
		a++;
	}
	return (a);
}

char				*ft_strdup(char *src)
{
	char			*c;
	int				i;

	i = ft_strlen(src);
	c = malloc((sizeof(char)) * (i + 1));
	if (!(c))
		return (NULL);
	ft_strcpy(c, src);
	return (c);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*nstr;
	int				i;

	i = 0;
	if (ac < 0)
		ac = 0;
	nstr = malloc((sizeof(t_stock_str)) * (ac + 1));
	if (!(nstr))
		return (NULL);
	while (i < ac)
	{
		(nstr[i]).size = ft_strlen(av[i]);
		(nstr[i]).str = av[i];
		(nstr[i]).copy = ft_strdup(av[i]);
		i++;
	}
	(nstr[i]).str = 0;
	return (nstr);
}