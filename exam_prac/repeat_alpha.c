#include <unistd.h>

int	main (int ac, char **av)
{
	int	i;
	int	number;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			number = 1;
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				number += av[1][i] - 'a';
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				number += av[1][i] - 'A';
			
			while (number > 0)
			{
				write(1, &av[1][i], 1);
				number--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}		
