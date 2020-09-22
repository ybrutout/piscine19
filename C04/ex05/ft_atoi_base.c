/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 19:05:21 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/22 10:00:27 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 
#include <stdio.h> 

int		same_base(char *str, char *base, int i, int *j)
{
	while (base[j])
	{
		if (str[i] != base[j])
		{
			j++;
		}
		else 
		{
			return (1);
		}
	}
	return (0);
}

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

int		base_len(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int 	index(char *str, char *base, int i)
{
	int j; 

	j = 0; 
	if (str[i] != )
}

int		expo(int nb, int puissance)
{
	if (puissance)
		return (nb * expo(nb, puissance - 1));
	return (1);
}

int		puissance()

int		ft_atoi_base(char *str, char *base)
{
	int i; 
	int j;
	int n;
	int index;
	int posi;

	i = 0;
	j = 0;
	index = 0;
	posi = 0;
	wh_space(str, &i);
	nb_signe(str, &i, &j);
	n = 0;
	while (same_base(str, base, i, &index))
	{
		i++;
		n = index * expo(base_len(base), 
	}
	if (j % 2 == 1)
	{
		n = n * -1;
	}
	return (n);
}

int        main(void)
{
	printf("%d\n", expo(2, 2));
	return 0;
	char str [200] = "     \n\n\n\t\t\t\t-------++++++++++++++++++++++++++4";
	printf("mon int vaut : %d\n", ft_atoi(str));
	return(0);
}