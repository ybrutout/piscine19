/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 14:35:33 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/27 07:20:35 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

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
	t_stock_str		**new_str;
	int				i;

	i = 0;
	if (ac < 0)
		ac = 0;
	new_str = malloc(sizeof(t_stock_str) * ac + 1);
	if (!(new_str))
		return (NULL);
	while (i < ac)
	{
		new_str[i]->size = ft_strlen(av[i]);
		new_str[i]->str = av[i];
		new_str[i]->copy = ft_strdup(av[i]);
	}
	new_str[i]->str = 0;
	return (*new_str);
}
