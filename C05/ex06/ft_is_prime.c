/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 20:56:46 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/25 07:59:10 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	unsigned int i;

	i =  2;
	if (nb < 2)
	{
		return (0);
	}
	while (i * i <= (unsigned int)nb)
	{
		if (!(nb % i))
			return (0);
		i = i + 1;
	}
	return (1);
}

int	main(void)
{
	int	number;
	int number2;
	
	number = -2147483648;
	number2 = 2147483647;
	printf("is_prime(%d)\n", ft_is_prime(number));
	printf("is_prime(%d)\n", ft_is_prime(number2));
	return (0);
}
