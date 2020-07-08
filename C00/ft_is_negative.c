#include <unistd.h>

void	ft_is_negative(int n)
{
	n >= 0 ? write(1, "P", 1) : write(1, "N", 1);
}
