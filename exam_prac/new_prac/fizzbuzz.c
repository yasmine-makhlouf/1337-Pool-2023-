

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int	i)
{
	if (i > 9)
	{
		ft_putnbr (i / 10);
		ft_putnbr (i % 10);
	}
	else if (i < 10)
		ft_putchar (i + '0');
}

void	buzz(int	x, int	y)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (((i % x) == 0) && ((i % y) == 0))
		{
			write (1, "fizzbuzz\n", 9);
		}
		else if ((i % x) == 0)
		{
			write (1, "fizz\n", 5);
		}
		else if ((i % y) == 0)
		{		
			write (1, "buzz\n", 5);
		}
		else
		{	
			ft_putnbr (i);
			ft_putchar('\n');
		}
		i++;
	}
}

int	main(void)
{
	int	x;
	int	y;

	x = 7;
	y = 4;
	buzz(x, y);
	return (0);
}
