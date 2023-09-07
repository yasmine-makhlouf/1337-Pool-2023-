
#include <unistd.h>

int	ft_len(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

int	main (int ac, char **av)
{
	int	size;

	size = (ft_len(av[1]) - 1);
	if (ac == 2)
	{
		while (size >= 0)	
		{
			write(1, &av[1][size], 1);
			size--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
