/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 17:34:27 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/20 14:58:40 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 
#include <stdio.h> 

void	wh_space(char *str, int *i)
{
	int a;

	a = *i;
	while ((str[a] >= 9 && str[a] <= 13) || str[a] == ' ')
	{
		a++;
	}
	*i = a;
}

void	nb_signe(char *str, int *i, int *j)
{
	int a; 
	int b;

	a = *i;
	b = *j;
	while (str[a] == '-' || str[a] == '+')
	{
		if ( str[a] == '-')
		{
			b++;
			a++;
		}
		else
		{
			a++;
		}
	}
	*i = a;
	*j = b;
}

int		ft_atoi(char *str)
{
	int i; 
	int j;
	int n;

	i = 0;
	j = 0;
	wh_space(str, &i);
	nb_signe(str, &i, &j);
	n = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + str[i] - '0';
		i++;
	}
	if (j % 2 == 1)
	{
		n = n * -1;
	}
	return (n);
}

int        main(void)
{
    char str [200] = "     \n\n\n\t\t\t\t-------++++++++++++++++++++++++++4";
    printf("mon int vaut : %d\n", ft_atoi(str));
    return(0);
}