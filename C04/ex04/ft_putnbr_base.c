/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 15:03:46 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/24 11:39:19 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_val_base(char a, char *base)
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
				|| str[i] == '-' || ft_val_base(str[i], str + i + 1))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		base_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr_base(int nb, char *base)
{
	long int i;

	i = nb;
	if (ft_if(base) < 1)
		return ;
	if (base_len(base) < 2)
		return ;
	if (i < 0)
	{
		ft_putchar('-');
		i = i * -1;
	}
	if (i > base_len(base) - 1)
		ft_putnbr_base(i / base_len(base), base);
	ft_putchar(base[i % base_len(base)]);
}

int		main(void)
{
    char base[20] = "01";
    int test = 2147;
    ft_putnbr_base(test, base);
}
