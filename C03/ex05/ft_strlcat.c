unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	i;
	unsigned int	t;

	a = ft_strlen(dest);
	b = ft_strlen(src);
	i = 0;
	t = a + b;
	if (size > a)
	{
		while (a < size - 1 && src[i] != '\0')
		{
			dest[a] = src[i];
			i++;
			a++;
		}
		dest[a] = '\0';
		return (t);
	}
	return (size + b);
}
