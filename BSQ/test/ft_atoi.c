/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 09:55:36 by agraton           #+#    #+#             */
/*   Updated: 2020/09/13 13:31:08 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_is_white_space(char c)
{
	if (!(c == '\t' || c == '\n' || c == '\v'))
		if (!(c == '\f' || c == '\r' || c == ' '))
			return (0);
	return (1);
}

int					ft_atoi(char *str)
{
	long int		ans;
	int				neg;

	neg = 0;
	ans = 0;
	while (ft_is_white_space(*str))
		str++;
	while (*str == '+' || *str == '-')
		if (*(str++) == '-')
			neg++;
	while (*str >= '0' && *str <= '9')
		ans = (10 * ans) - '0' + *(str++);
	if (neg % 2)
		return (-ans);
	return (ans);
}
