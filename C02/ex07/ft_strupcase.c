char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 97) && (str[a] <= 122))
		{
			str[a] = str[a] - 32;
		}
		a++;
	}
	return (str);
}
