char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (str[a] != '\0')
	{
		if ((b == 0) && (str[a] >= 97 && str[a] <= 122))
		{
			str[a] = str[a] - 32;
			b++;
		}
		else if (b > 0 && (str[a] >= 65 && str[a] <= 90))
			str[a] = str[a] + 32;
		else if ((str[a] < 65 && str[a] > 57) || (str[a] > 90 && str[a] < 97))
			b = 0;
		else if (str[a] < 48 || str[a] > 122)
			b = 0;
		else
			b++;
		a++;
	}
	return (str);
}
