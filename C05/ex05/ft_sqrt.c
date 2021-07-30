int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	n;
	int	a;

	n = nb;
	a = 1;
	if (n <= 0)
		return (0);
	while (a * a < nb && a <= 46340)
		a++;
	if (a * a == n)
		return (a);
	else
		return (0);
}
