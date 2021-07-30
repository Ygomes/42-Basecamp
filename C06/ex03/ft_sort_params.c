#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_swap(char **a, char **b);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar (*str);
		str++;
	}
	ft_putchar('\n');
}

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

void	ft_swap(char **a, char **b)
{
	char	*x;

	x = *a;
	*a = *b;
	*b = x;
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;
	int	i;

	a = 1;
	while (a < argc)
	{
		b = a + 1;
		while (b < argc)
		{
			if (ft_strcmp(argv[a], argv[b]) > 0)
				ft_swap(&argv[a], &argv[b]);
			b++;
		}
		a++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr (argv[i]);
		i++;
	}
	return (0);
}
