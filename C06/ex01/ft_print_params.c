#include <unistd.h>

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	if (argc > 0)
	{
		a = 1;
		while (a < argc)
		{
			b = 0;
			while (argv[a][b] != '\0')
			{
				ft_putchar (argv[a][b]);
				b++;
			}
			ft_putchar ('\n');
			a++;
		}
	}
	return (0);
}
