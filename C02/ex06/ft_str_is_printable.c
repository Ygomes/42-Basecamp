int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] < 32 ) || (str[a] > 127))
		{
			return (0);
		}
		a++;
	}
	return (1);
}
