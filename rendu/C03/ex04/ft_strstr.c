/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 09:23:49 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/22 10:25:56 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	if (to_find[0] == '\0')
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
			if (to_find[i] == '\0')
				return (str);
		}
		str++;
	}
	return (0);
}
