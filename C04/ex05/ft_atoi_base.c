/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 19:05:21 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/24 11:37:58 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 
#include <stdio.h> 

int		ft_if(char *str)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (str[i])
	{
		j = i + 1;
		while (str[i] != str[j] && str[i] > 31 && str[i] != '+' \
					&& str[i] != '-' && str[j] != '\0')
		{
			j++;
		}
		if (str[j] == '\0')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

int		base_len(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int		ft_val_base(char a, char *base)
{
	int b;

	b = 0;
	while (base[b])
	{
		if (a == base[b])
			return (b);
		b++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int i; 
	int j;
	int n;
	int sizebase;

	j = 0;
	n = 0;
	if ((sizebase = base_len(base)) < 2)
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if ( *str == '-')
			j = j + 1;
		str++;
	}
	while ((i = ft_val_base(*str, base)) >= 0)
	{
		n = n * sizebase + i;
		str++;
	}
	if (j % 2 == 1)
	{
		n = n * -1;
	}
	return (n);
}

int		main(void)
{
	printf("%d\n", ft_atoi_base("-123456", "0123456789"));
	fflush(stdout);
	printf("%d\n", ft_atoi_base("11110001001000000", "01"));
	fflush(stdout);
	printf("%d\n", ft_atoi_base("-1e240", "0123456789abcdef"));
	fflush(stdout);
}