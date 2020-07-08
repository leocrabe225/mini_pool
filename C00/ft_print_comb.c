#include <unistd.h>

void	ft_print_comb(void)
{
	int nbr[2];

	*nbr = 11;
	while (++(*nbr) != 800)
		if (*nbr / 100 < (*nbr / 10) % 10 && (*nbr / 10) % 10 < *nbr % 10)
		{
			(nbr[1] = (*nbr / 100) + '0') ? write(1, &nbr[1], 1) : 0;
			(nbr[1] = (*nbr / 10 % 10) + '0') ? write(1, &nbr[1], 1) : 0;
			(nbr[1] = (*nbr % 10) + '0') ? write(1, &nbr[1], 1) : 0;
			*nbr != 789 ? write(1, ", ", 2) : 0;
		}
}
