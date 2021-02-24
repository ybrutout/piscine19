/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 18:33:03 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/25 07:43:25 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
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

	str = "hwbdcbbcZA456.,bhdw";
	ft_str_is_lowercase(str);
	printf("%d", ft_str_is_lowercase(str));
	return (0);
}
