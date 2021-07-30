int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	a;
	int	b;

	a = nb;
	b = nb;
	while (a > 1)
	{
		b = b * (a - 1);
		a--;
	}
	if (nb == 0)
		return (b + 1);
	else if (nb < 0)
		return (0);
	return (b);
}
