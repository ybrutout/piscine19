/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 17:13:41 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/29 21:17:08 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 

#include <stdio.h> //for test
#include <unistd.h>

int		ft_word(char str, char *charsep)
{
	int j;
	
	j = 0;
	while (charsep[j])
	{
		if (charsep[j] == str)
			return (1);
		j++;
	}
	return(0);
}

int		ft_count_word(char *str, char *charsep)
{
	int inword;
	int count; 
	int i; 

	i = 0;
	inword = 1;
	count = 0;
	while (str[i])
	{
		if (ft_word(str[i], charsep) == 1)
		{
			if (inword == 1)
			{
				count++;
				inword = 0;
			}
		}
		else 
			inword = 1;
		i++;
	}
	if (i > 0 && !(ft_word(str[i], charsep)))
		count++;

	return (count);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[n] = '\0';
	return (dest);
}

int		ft_strlen_n(char *str, char *charsep, int i)
{
	int count; 

	count = 0;
	while (str[i])
	{
		if (!(ft_word(str[i], charsep)))
		{
			count++;
			i++;
		}
		else
			return (count);
	}
	return (count);
}

  char		**ft_split(char *str, char *charsep)
  {
	char				**tab;
	int 				i;
	int					j;
	unsigned int		nsize;

	i = -1;
	j = 0;
	if (!(tab = malloc(sizeof(char*) * (ft_count_word(str, charsep) + 1))))
		return (0);	
	while (str[++i])
	{
		if (!(ft_word(str[i], charsep)))
		{
			nsize = ft_strlen_n(str, charsep, i);
			if (!(tab[j] = malloc(sizeof(char) * (nsize + 1))))
				return (0);
			ft_strncpy(tab[j], &str[i], nsize);
			i = i + nsize;
			j++;
		}
	}
	tab[j] = 0;
	return (tab);
  }

int		main(void)
{
	int		index;
	char	**split;

	split = ft_split("UnFnMG	RhMBUDtnWJpprh6ZC7 xzGasuTbDD nn", "gBO62");
	index = 0;
	printf("tab start\n");
	while (split[index])
	{
		printf("tab[%d]: $%s$\n", index, split[index]);
		index++;
	}
	printf("tab end\n");
}

/*
int		main(void)
{
	char str[30] = "coucouzcommentzcazvaz?";
	char charsep[5] = "z";
	char **essais;
	int i;

	essais = ft_split(str, charsep);
	i = 0;
	while (essais[i])
	{
		printf("%s\n", essais[i]);
		i++;
	}
	return (0);
}
*/