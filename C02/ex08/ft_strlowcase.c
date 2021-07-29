char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 65) && (str[a] <= 90))
		{
			str[a] = str[a] + 32;
		}
		a++;
	}
	return (str);
}
