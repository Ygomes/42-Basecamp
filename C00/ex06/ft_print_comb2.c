#include <unistd.h>

void	ft_print_comb2(void);
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 10;
	while (a < b * b)
	{
		c = a + 1;
		while (c < b * b)
		{
			ft_putchar (a / b + 48);
			ft_putchar (a % b + 48);
			ft_putchar (' ');
			ft_putchar (c / b + 48);
			ft_putchar (c % b + 48);
			if ((a / b != 9) || (a % b != 8))
			{
				write (1, ", ", 2);
			}
			c++;
		}
		a++;
	}
}
