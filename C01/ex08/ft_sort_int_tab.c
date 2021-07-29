void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	rev;

	a = 0;
	while (a < size - 1)
	{
		b = 0;
		while (b < size - 1)
		{
			if (tab[b] > tab[b + 1])
			{
				rev = tab[b];
				tab[b] = tab[b + 1];
				tab[b + 1] = rev;
			}
			b++;
		}
		a++;
	}
}
