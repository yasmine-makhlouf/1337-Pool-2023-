#include <unistd.h>
void	putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	
	if(ac == 2)
	{
		int i;

		i = 0;
		while(av[1][i])
		{	
			if((av[1][i] >= 'A' && av[1][i] <= 'M') ||
					(av[1][i] >= 'a' && av[1][i] <= 'm'))
			{
				av[1][i] += 13;
				putchar(av[1][i]);
			}

			else if((av[1][i] >= 'N' && av[1][i] <= 'Z') ||
					(av[1][i] >= 'n' && av[1][i] <= 'z'))
			{
				av[1][i] -= 13;	
				putchar(av[1][i]);
			}
			else
				putchar(av[1][i]);
			i++;
		}
	}
	putchar('\n');
	return (0);
}

