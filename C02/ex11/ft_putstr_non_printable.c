#include <unistd.h>

void	ft_putstr_non_printable(char *str);
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int		a;
	unsigned int		b;
	unsigned int		c;
	unsigned char	*hexa;

	a = 0;
	hexa = "0123456789abcdef";
	while (str[a] != '\0')
	{
		if (str[a] >= 0 && str[a] <= 31)
		{
			ft_putchar ('\\');
			b = str[a] / 16;
			ft_putchar (hexa[b]);
			c = str[a] % 16;
			ft_putchar (hexa[c]);
		}
		else
			ft_putchar (str[a]);
		a++;
	}
}
