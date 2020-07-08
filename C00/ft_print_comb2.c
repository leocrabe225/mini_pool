#include <unistd.h>

void	ft_print_comb2(void)
{
	int nbr[2];

	*nbr = 0;
	while (++(*nbr) != 9900)
		if (*nbr / 100 < *nbr % 100)
		{
			(nbr[1] = (*nbr / 1000) + '0') ? write(1, &nbr[1], 1) : 0;
			(nbr[1] = (*nbr % 1000 / 100) + '0') ? write(1, &nbr[1], 1) : 0;
			write(1, " ", 1);
			(nbr[1] = (*nbr % 100 / 10) + '0') ? write(1, &nbr[1], 1) : 0;
			(nbr[1] = (*nbr % 10) + '0') ? write(1, &nbr[1], 1) : 0;
			*nbr != 9899 ? write(1, ", ", 2) : 0;
		}
}
