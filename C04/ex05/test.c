
#include <stdio.h>

int		expo(int nb, int puissance)
{
    int c;

    c = 1;
	while ((--puissance)+1)
        c *= nb;
    return c;
}

int        main(void)
{
	printf("%d\n", expo(2, 5));

	return(0);
}