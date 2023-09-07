
#include <unistd.h>

int	count(char	harf)
{
	int	letter;

	letter = 1;
	if (harf >= 'A' && harf <= 'Z')
		letter += harf - 'A'; 
	else if(harf >= 'a' && harf <= 'z')
		letter += harf - 'a'; 
	return (letter);
}

int	 main (int ac, char **av)
{
	int	i;
	int	letter;
	int	j;

	i = 0;
	j = 1;
	if (ac == 2)
	{
		while (av[1][i])
		{
			letter = count(av[1][i]);
			while (j <= letter)
			{
				write (1, &av[1][i], 1);
				j++;
			}
			j = 1;
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
