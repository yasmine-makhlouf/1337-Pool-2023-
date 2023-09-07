#include <unistd.h>

int	 main (int ac, char **av)
{
	int	letter;
	int	i;

	i = 0;
	letter = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				letter = 'Z' - av[1][i] + 'A';
				write(1, &letter, 1);
			}
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				letter = 'z' - av[1][i] + 'a';	
				write(1, &letter, 1);
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
