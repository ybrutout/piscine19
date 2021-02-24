/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 15:11:41 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/17 17:20:32 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> 
#include <stdio.h>

int				main(void)
{
	char dest[10] = "yannah";
	char src[10] = "loohan";
	unsigned int size;

	size = 5;
	printf("dest = %s\n", dest);
	printf("src = %s\n", src);
	printf("retourne : %lu \n", ft_strlcat(dest, src, size));
	printf("dest = %s", dest);
	return(0);
}
