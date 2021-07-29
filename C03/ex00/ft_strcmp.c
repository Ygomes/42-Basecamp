int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	a;
	int	d;

	a = 0;
	while ((s1[a] == s2[a]) && (s1[a] != '\0') && (s2[a] != '\0'))
		a++;
	d = ((unsigned char)s1[a] - (unsigned char)s2[a]);
	return (d);
}
