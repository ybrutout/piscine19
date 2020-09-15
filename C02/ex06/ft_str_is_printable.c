/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 19:15:47 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/15 19:32:31 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 31 && str[i] >= 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		main(void)
{
	char *str;

	str = "vdewu\nouwcd2565413.,?\t";
	ft_str_is_printable(str);
	printf("%d", ft_str_is_printable(str));
	return (0);
}
