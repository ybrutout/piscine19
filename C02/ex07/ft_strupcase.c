/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 19:34:07 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/25 07:43:36 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

int		main(void)
{
	char str[100] = "24545oiu87ighethgrFSJDTH";

	ft_strupcase(str);
	printf("%s", str);
	return (0);
}
