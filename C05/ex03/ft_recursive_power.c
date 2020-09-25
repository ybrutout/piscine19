/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 18:03:46 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/25 07:59:01 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	int i;

	i = 1;
	if (nb == 0 && power == 0)
		return (0);
	if (power < 0)
		return (0);
	while (power > 0)
	{
		i = nb * i;
		power--;
		ft_recursive_power(nb, power);
	}
	return (i);
}

int	main(void)
{
	printf("10^2 = %d\n", ft_recursive_power(10, 2));
	printf("10^0 = %d\n", ft_recursive_power(10, 0));
	printf("10^-1 = %d\n", ft_recursive_power(10, -1));
	printf("10^5 = %d\n", ft_recursive_power(10, 5));
	printf("0^0 = %d\n", ft_recursive_power(0, 0));
}