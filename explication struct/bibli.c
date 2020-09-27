/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bibli.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 09:00:40 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/26 09:22:10 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bibli.h"

void print_bibli(t_book **bibli);
void rent(t_book **bibli, char *title, char *renter);

t_book *ft_add_book(char *tt, char *aut, int num)
{
    t_book *newbook;

    newbook = malloc(sizeof(t_book));
    newbook->title = tt;
    newbook->autor = aut;
    newbook->num_of_page = num;
    newbook->renter = NULL;
    return (newbook);
}

int main(void)
{
    t_book **bibli;

    bibli = malloc(sizeof(t_book) * 6);
    bibli[5] = 0;
    bibli[0] = ft_add_book("harry potter1", "jkr", 202);
    bibli[1] = ft_add_book("harry potter2", "jkr", 350);
    bibli[2] = ft_add_book("harry potter3", "jkr", 450);
    bibli[3] = ft_add_book("harry potter4", "jkr", 800);
    bibli[4] = ft_add_book("harry potter5", "jkr", 850);
    print_bibli(bibli);
    printf("\n\n\n\n");
    rent(bibli, "harry potter2", "bob");
    print_bibli(bibli);
    
}

int		ft_strcmp(char *s1, char *s2)
{
	int i; 
	int j;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] != s2[i])
	{
		j = s1[i] - s2[i];
	}
	else 
	{
		j = 0;
	}
	return (j);
}

void print_bibli(t_book **bibli)
{
    int i;

    i = -1;
    while (bibli[++i])
    {
        printf("Book n•%i :\ttitle : %s\tautor : %s\tnum of pages : %i\trenter : %s\n", i, bibli[i]->title, bibli[i]->autor, bibli[i]->num_of_page, bibli[i]->renter);
    }
}

void rent(t_book **bibli, char *title, char *renter)
{
    int i;

    i = -1;
    while (bibli[++i])
    {
        if (ft_strcmp(title, bibli[i]->title) == 0)
        {
             bibli[i]->renter = renter;
             return ;
        }
    }
    printf("aucun livre ne correspond a ce titre");
}