
#include <stdio.h>

a = '0';
	while(a <= '9')
	{
		b = '0';
		while( b <= '9')
		{
			ft_putchar(a);
			ft_putchar(b);
			if (a == '9' && b == '9')
			{
				;
			}
			else
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		b++;
		}
	a++;
	}	
	}
}