#include <unistd.h>

void	ft_print_combn(int s)
{
	int n[7];

	n[4] = 0;
	n[3] = 1;
	n[6] = 1;
	while (n[4]++ != s)
		n[3] *= 10;
	*n = -1;
	while (++(*n) != n[3])
	{
		n[4] = 0;
		n[5] = *n % 10;
		n[2] = *n / 10;
		while (++n[4] < s && (n[4] = (n[5] <= n[2] % 10) ? s * 2 : n[4]))
			(n[5] = n[2] % 10) ? (n[2] /= 10) : (n[2] /= 10);
		n[5] = n[3] / 10;
		n[2] = *n;
		if (n[4] == s)
			while (n[4]-- && n[6]++)
			{
				(n[6] != 2 && n[5] == n[3] / 10) ? write(1, ", ", 2) : 0;
				(n[1] = n[2] / n[5] + '0') ? write(1, &n[1], 1) : 0;
				(n[2] %= n[5]) ? (n[5] /= 10) : (n[5] /= 10);
			}
	}
}
