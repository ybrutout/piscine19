/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 15:11:41 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/17 16:08:21 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> 
#include <stdio.h>

int				main(void)
{
	char dest[25] = "HelloNahama";
	char src[40] = "HelloLoohan et Nahama";
	unsigned int size;

	size = 10;
	printf("C'était : %s\n", dest);
	strlcpy(dest, src, size);
	printf("C'est : %s\n", dest);
	return (0);
}
