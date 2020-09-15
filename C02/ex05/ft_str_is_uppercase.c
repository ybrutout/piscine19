/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 18:44:51 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/15 18:53:08 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str)
{
	int a;

	a = 0;
	while (str[a])
	{
		if (str[a] < 'A' || str[a] > 'Z')
		{
			return (0);
		}
		a++;
	}
	return (1);
}

int		main(void)
{
	char *str;

	str = "";
	ft_str_is_uppercase(str);
	printf("%d", ft_str_is_uppercase(str));
	return (0);
}
