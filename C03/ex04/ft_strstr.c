/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 09:23:49 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/17 11:05:57 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int val_str;
	unsigned int size_to_find;
	unsigned int val_to_find;

	val_str = 0;
	size_to_find = 0;
	val_to_find = 0;
	while (to_find[size_to_find] != '\0')
	{
		size_to_find++;
	}
	while (str[val_str])
	{
		if (str[val_str] != str[0])
		{
			val_str++;
		}
		else if (str[val_str] == str[0])
		{
			val_to_find =0;
			while (str[val_str] == to_find[val_to_find])
			{
				val_str++;
				val_to_find++;
			}
			if (val_to_find == size_to_find)
			{
				return(&str[val_str - size_to_find]);
			}
			else if ( val_to_find != size_to_find)
			{
				val_str++;
			}
		}
	}

	return(&str[val_str - size_to_find]);
}

int		main(void)
{
	char str[20] = "bionifjourbifewbjl";
	char to_find[5] = "bif";

	printf("str %s\n", str);
	printf("to_find %s\n", to_find);
	printf("pattern %s\n", ft_strstr(str, to_find));
	return(0);
}