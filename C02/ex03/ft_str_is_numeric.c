int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] < 48) || (str[a] > 57))
		{
			return (0);
		}
		a++;
	}
	return (1);
}
