int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{	
		if ((str[a] < 'A') || (str[a] > 'Z' && str[a] < 'a') || (str[a] > 'z'))
		{
			return (0);
		}
		a++;
	}
	return (1);
}
