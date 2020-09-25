/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 22:20:53 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/25 07:59:14 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>
#include <limits.h>

int		ft_find_next_prime(int nb)
{
	unsigned int i;

	i =  3;
	if (nb < 3)
	{
		return (2);
	}
	if (nb % 2 == 0)
	{
		nb++;
	}
	while (i * i <= (unsigned int)nb)
	{
		if (!(nb % i))
		{
            nb = nb +2;
            i = 1;
        }
		i++;
	}
	return (nb);
}

int	main(void)
{
	int	index;

	index = -2;
	while (index < 100)
	{
		printf("find_next_prime(%d) = %d\n", index, ft_find_next_prime(index));
		index++;
	}
	printf("find_next_prime(%d) = %d\n", INT_MAX, ft_find_next_prime(INT_MAX));
}