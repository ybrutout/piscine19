/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 13:19:17 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/29 17:30:11 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_convert_base(char *nbr, char *base_from, char base_to)
{
	int		n;
	char	*str;

	n = 0;
	n = ft_atoi_base(nbr, base_from);
	str = ft_putnbr_base(n, base_to);
	return (str);
}

int main(void)
{
	char b1[100] = "0123456789";
	char b2[100] = "01";
	char nb[100] = "87954654";
	ft_convert_base(&nb, &b1, &b2);
	return (0);
}
