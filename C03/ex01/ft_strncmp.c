int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;
	int				d;

	a = 0;
	while ((s1[a] != '\0') && (s1[a] == s2[a]) && (a < n - 1))
		a++;
	d = ((unsigned char)s1[a] - (unsigned char)s2[a]);
	if (n == 0)
		return (0);
	return (d);
}
