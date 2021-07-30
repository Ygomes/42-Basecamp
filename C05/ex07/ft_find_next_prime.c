int	ft_find_next_prime(int nb);
int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	a;

	a = 2;
	if (nb < 2)
		return (0);
	while (a <= nb / 2)
	{
		if (nb % a == 0)
			return (0);
		a++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	n;

	n = nb;
	while (n < 2147483647)
	{
		if (ft_is_prime(n))
			return (n);
		n++;
	}
	return (n);
}
