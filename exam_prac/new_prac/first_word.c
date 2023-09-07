
#include <unistd.h>

int	main (int ac, char **av)
{
	int	i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
		{
			while (av[1][i] == ' ' || av[1][i] == '\t' || av[1][i] != '\0')
			{
				i++;

			}	
			while ((av[1][i] != ' ') && (av[1][i] != '\t') && (av[1][i] != '\0'))
			{
				write(1, &av[1][i], 1);
				i++;
			}
			break;
		}
	}
	write(1, "\n", 1);
	return (0);
}
