int	ft_fibonacci(int index);

int	ft_fibonacci(int index)
{
	int	i;

	i = index;
	if (i < 0)
		return (-1);
	else if (i == 0)
		return (0);
	else if (i == 1 || i == 2)
		return (1);
	else
		return (ft_fibonacci(i - 1) + ft_fibonacci(i - 2));
}
