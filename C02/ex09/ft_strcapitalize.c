/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 21:03:23 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/16 09:11:31 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_s_lowal(char *s)
{
	return (*s >= 'a' && *s <= 'z');
}

int		ft_s_upal(char *s)
{
	return (*s >= 'A' && *s <= 'Z');
}	

int		ft_s_digit(char *s)
{
	return (*s >= '0' && *s <= '9');
}

int		ft_s_other(char *s)
{
	return (*s < '0' || (*s > '9' && *s < 'A') || (*s > 'Z' && *s < 'a') ||  *s > 'z');
}

char	*ft_strcapitalize(char *str)
{
	unsigned int i;
	char *s;
	
	s = str;
	i = 0;
	while (s[i] != '\0')
	{
		if (ft_s_upal(s) || ft_s_lowal(s))
		{
			if (i == 0)
			{
				if (ft_s_lowal(s))
				{
					s[i] = s[i] - 32;
				}
			}
			else if  (ft_s_upal(s -1) || ft_s_lowal(s - 1) || ft_s_digit(s - 1))
			{
				if (ft_s_lowal(s))
				{
					s[i] = s[i] - 32;
				}
			}
			else if (ft_s_upal(s - 1) || ft_s_lowal(s - 1) || ft_s_digit(s - 1))
			{
				if (ft_s_upal(s))
				{
					s[i] = s[i] + 32;
				}
			}
		}
		i++;
	}
	return (str);
}

int		main(void)
{
	char str[30] = "bonJOUr,.,comMEnt vA ? 19ecole";

	printf("C'était : %s\n", str);
	ft_strcapitalize(str);
	printf("C'est : %s\n", str);
	return (0);
}