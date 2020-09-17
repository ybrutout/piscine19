/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 09:23:49 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/17 09:53:41 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sdtio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	return(char);
}

int		main(void)
{
	char str[10] = "yannah"
	char to_find[5] = "nah"

	printf("str %s\n", str);
	printf("to_find %s\n", to_find);
	printf("pattern %d\n", ft_strstr(str, to_find))
	return(0);
}