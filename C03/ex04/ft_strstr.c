/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 09:23:49 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/25 07:44:08 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>



char	*ft_strstr(char *str, char *to_find)
{
	int i; 

	if (to_find [0] == '\0')
	 	return (str);
	while (*str)
	{
	
		if (*str == *to_find)
		{
			i = 0;
			while (str[i] == to_find[i] && to_find[i] != '\0' && str[i] != '\0')
			{
				i++;
			}
			if (to_find [i] == '\0')
				return (str);
		}
		str++;
	}
	return (0);
}

int		main(void)
{
	char str[20] = "hello world";
	char to_find[15] = "worldghwqg";

	printf("str %s\n", str);
	printf("to_find %s\n", to_find);
	printf("pattern : %s\n", ft_strstr(str, to_find));
	return(0);
}
