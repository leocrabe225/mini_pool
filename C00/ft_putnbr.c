#include <unistd.h>

void	ft_putnbr(int nb)
{
	char c;

	nb < 0 ? write(1, "-", 1) : 0;
	if (nb >= -9 && nb < 10 && (c = (nb < 0 ? -nb : nb) + '0'))
		write(1, &c, 1);
	else
	{
		nb < 0 ? ft_putnbr((nb / 10) * -1) : ft_putnbr(nb / 10);
		nb < 0 ? ft_putnbr((nb % 10) * -1) : ft_putnbr(nb % 10);
	}
}
