int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] < 'A') || (str[a] > 'Z'))
		{
			return (0);
		}
		a++;
	}
	return (1);
}
