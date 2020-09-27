

#ifndef BIBLI_H
# define BIBLI_H

# include <stdio.h>
# include <stdlib.h>

typedef struct  s_book
{
    char *title;
    char *autor;
    char *renter;
    int num_of_page;
}               t_book;

#endif