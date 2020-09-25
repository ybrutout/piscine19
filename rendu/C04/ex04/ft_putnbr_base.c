/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 15:03:46 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/25 08:01:47 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_if(char *str)
{
	int			i;
	int			j;

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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		base_len(char *str)
{
	int			i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr_base(int nb, char *base)
{
	long int	i;

	i = nb;
	if (!ft_if(base))
	{
		return ;
	}
	if (base_len(base) > 1)
	{
		if (i < 0)
		{
			ft_putchar('-');
			i *= -1;
		}
		if (i > base_len(base) - 1)
		{
			ft_putnbr_base(i / base_len(base), base);
		}
		ft_putchar(base[i % base_len(base)]);
	}
}
