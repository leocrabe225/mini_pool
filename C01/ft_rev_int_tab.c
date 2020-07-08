
void	ft_rev_int_t(int *t, int s)
{
	s++ ? t-- : t--;
	while (s > 0 && (s -= 2) && t++)
		(((*t += t[s]) || 1) && (t[s] = *t - t[s])) ? *t -= t[s] : (*t -= t[s]);
}
