void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	a = 0;
	while (a <= size - 1)
	{
		b = tab[a];
		tab[a] = tab[size - 1];
		tab[size - 1] = b;
		size--;
		a++;
	}
}
