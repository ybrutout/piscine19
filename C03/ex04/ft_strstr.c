/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 09:23:49 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/20 12:51:27 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int g_vs = 0;
int g_tf = 0;
int g_vtf = 0;
int g_s = 0;

void	ft_count_size(char *str, char *to_find)
{
	while (str[g_s] != '\0')
	{
		g_s++;
	}
	while (to_find[g_tf] != '\0')
	{
		g_tf++;
	}
}

int		ft_if_size(void)
{
	if (g_tf > g_s)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	ft_count_size(str, to_find);
	ft_if_size();
	if (to_find [0] == '\0')
	 	return (str);
	while (str[g_vs])
	{
		if (str[g_vs] != to_find[0])
			g_vs++;
		else if (str[g_vs] == to_find[0])
		{
			g_vtf = 0;
			while (str[g_vs] == to_find[g_vtf])
			{
				g_vs++;
				g_vtf++;
			}
			if (g_vtf == g_tf)
				return (&str[g_vs - g_vtf]);
			else if (g_vtf != g_tf)
				g_vs++;
		}
	}
	return (NULL);
}

int		main(void)
{
	char str[20] = "hello world";
	char to_find[8] = "yanna";

	printf("str %s\n", str);
	printf("to_find %s\n", to_find);
	printf("pattern : %s\n", ft_strstr(str, to_find));
	return(0);
}
