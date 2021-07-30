int	ft_recursive_power(int nb, int power);

int	ft_recursive_power(int nb, int power)
{
	int	a;
	int	b;

	b = power;
	if (b < 0)
		return (0);
	else if (b == 0)
		return (1);
	else
	{
		a = nb * ft_recursive_power(nb, b - 1);
		return (a);
	}
}
