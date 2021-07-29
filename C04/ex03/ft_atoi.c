int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = 0;
	while ((str[a] >= 9 && str[a] <= 13) || (str[a] == 32))
		a++;
	while (str[a] == '+' || str[a] == '-')
	{
		if (str[a] == '-')
			b = b * -1;
		a++;
	}
	while (str[a] >= 48 && str[a] <= 57)
	{
		c = (str[a] - 48) + (c * 10);
		a++;
	}
	return (c * b);
}
