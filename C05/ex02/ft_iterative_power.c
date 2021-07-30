int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	a;
	int	b;

	a = power;
	b = nb;
	if (a < 0)
		return (0);
	else if (a == 0)
		return (1);
	while (a > 1)
	{
		b = b * nb;
		a--;
	}
	return (b);
}
