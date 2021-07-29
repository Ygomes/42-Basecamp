#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	int	i;

	i = 0;
	if (i <= n)
	{
		write (1, "P", 1);
	}
	else
	{
		write (1, "N", 1);
	}
	i++;
}
