int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		factorial = nb * ft_recursive_factorial(nb - 1);
		return (factorial);
	}	
}
