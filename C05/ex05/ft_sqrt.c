/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 20:32:23 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/22 20:54:35 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int		ft_sqrt(int nb)
{
	unsigned int i;

	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 1)
	{
		return (1);
	}
	while (i * i <= (unsigned int)nb)
	{
		if (i * i == (unsigned int)nb)
			return (i);
		else 
			i++;
	}
	return (0);
}

int	main(void)
{
	int number;

	number = -2;
	while (number < 26)
	{
		printf("sqrt(%d) = %d\n", number, ft_sqrt(number));
		number++;
	}
	printf("sqrt(%d) = %d\n", 1000000, ft_sqrt(1000000));
	printf("sqrt(%d) = %d\n", INT_MAX, ft_sqrt(INT_MAX));
	printf("sqrt(%d) = %d\n", INT_MIN, ft_sqrt(INT_MIN));
	printf("sqrt(%d) = %d\n", 2147395600, ft_sqrt(2147395600));
}