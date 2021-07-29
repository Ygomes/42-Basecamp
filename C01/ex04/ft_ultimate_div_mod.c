void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	d;
	int	r;

	if (*b != 0)
	{
		d = (*a) / (*b);
		r = (*a) % (*b);
		*a = d;
		*b = r;
	}
}
