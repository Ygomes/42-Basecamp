#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	c;

	c = nb;
	a = 1;
	if (nb < 0)
	{
		c = c * -1;
		write (1, "-", 1);
	}
	while (a < c / 10)
	{
		a = a * 10;
	}
	while (a > 0)
	{
		b = c / a + 48;
		c = c % a;
		a = a / 10;
		write (1, &b, 1);
	}
}
