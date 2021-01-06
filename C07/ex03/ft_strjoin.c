/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 21:05:45 by ybrutout          #+#    #+#             */
/*   Updated: 2020/11/24 16:47:58 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int a;

	a = 0;
	while (str[a])
	{
		a++;
	}
	return (a);
}

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char sep)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < size)
		j = j + ft_strlen(strs[i++]);
	if (size > 0)
		j = j + ft_strlen(&sep) * (size - 1);
	dest = malloc(sizeof(char) * j + 1);
	i = 0;
	j = 0;
	while (i < size)
	{
		ft_strcpy(&dest[j], strs[i]);
		j = j + ft_strlen(strs[i]);
		if ((i + 1) < size)
			ft_strcpy(&dest[j], &sep);
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

int		main(void)
{
	int		index;
	char	**strs;
	char	*separator;
	char	*result;

	strs = (char**)malloc(4 * sizeof(strs));
	strs[0] = "lol";
	strs[1] = "1234";
	strs[2] = "poiuic";
	strs[3] = "1234";
	separator = "-";
	index = -1;
	while (index < 4)
	{
		result = ft_strjoin(index, strs, *separator);
		printf("result with size = %d : %s\n", index, result);
		free(result);
		index++;
	}
}
