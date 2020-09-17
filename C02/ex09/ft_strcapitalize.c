/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 21:03:23 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/17 09:33:20 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_check(char *s, int param)
{
	if (param == 0)
		return (*s >= 'a' && *s <= 'z');
	if (param == 1)
		return (*s >= 'A' && *s <= 'Z');
	if (param == 2)
		return (*s >= '0' && *s <= '9');
	if (param == 3)
		if (*s < 48 || (*s > 57 && *s < 65) || (*s > 90 && *s < 97) || *s > 122)
			return (1);
	if (param == 4)
		return ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'));
	return (0);
}

char	ft_if(char *str, int i)
{
	if (ft_check(&str[i], 1) || ft_check(&str[i], 0))
	{
		if (str[i] == str[0])
		{
			if (ft_check(&str[i], 0))
				str[i] = str[i] - 32;
		}
		else if (ft_check(&str[i - 1], 4) || ft_check(&str[i - 1], 2))
		{
			if (ft_check(&str[i], 1))
				str[i] = str[i] + 32;
		}
		else if (ft_check(&str[i - 1], 3))
		{
			if (ft_check(&str[i], 0))
				str[i] = str[i] - 32;
		}
	}
	return (*str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_if(str, i);
		i++;
	}
	return (str);
}

int		main(void)
{
	char str[100] = "bonJOUr,.,comMEnt vA ? 19ecole hel00Nahama <><>yT ";

	printf("C'était : %s\n", str);
	ft_strcapitalize(str);
	printf("C'est : %s\n", str);
	return (0);
}
