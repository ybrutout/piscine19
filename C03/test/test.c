/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 17:25:25 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/20 10:54:58 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int				main(void)
{
	char dest[17] = "yannah";
	char src[8] = "loohan";
	unsigned int size;

	size = 17;
	printf("dest = %s\n", dest);
	printf("src = %s\n", src);
	printf("retourne : %lu \n", strlcat(dest, src, size));
	printf("dest = %s", dest);
	return(0);
}
