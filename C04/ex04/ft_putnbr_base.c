/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 15:03:46 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/21 09:07:58 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_put_error(void)
{
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int base_len(char *str)
{
    int i;

    i = -1;
    while (str[++i])
        ;
    return (i);
}

void	ft_putnbr_base(int nb, char *base)
{
	long int i;

	i = nb;
	
	if (i < 0)
	{
		ft_putchar('-');
		i *= -1;
	}
	if (i > 1)
	{
		ft_putnbr_base(i / base_len(base), base);
	}
	ft_putchar(base[i % base_len(base)]);
}

int main(void)
{
    char base[100] = "abcdefghij";
    int test = -14;
    ft_putnbr_base(test, base);
}