/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 08:33:50 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/29 17:29:28 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_val_put(char a, char *base)
{
	int b;

	b = 0;
	while (base[b])
	{
		if (a == base[b])
			return (1);
		b++;
	}
	return (0);
}

int		ft_if(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == '+' \
				|| str[i] == '-' || ft_val_put(str[i], str + i + 1))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nb, char *base)
{
    char *str; 
    int j;
	long int i;
    int k;

    j = 0;
	i = nb;
	if (ft_if(base) < 1)
		return ;
	if (base_len(base) < 2)
		return ;
	if (i > base_len(base) - 1)
		ft_putnbr_base(i / base_len(base), base);
    ft_putchar(base[i % base_len(base)]);
    if (i < 0)
	{
		ft_putchar('-');
		i = i * -1;
    }
}

