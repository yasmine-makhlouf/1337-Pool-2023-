#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (s1[i] && s2[i]))
	{
		if ((s1[i] - s2[i]) == 0)
		{
			i++;
		}
		else
			break ;
	}
	return (s1[i] - s2[i]);
} 
int	 main(void)
{
	char	s1[] = "h ;llo";
	char	s2[] = "ha'lli";
	unsigned int	n = 0;
	int	cmp;

	cmp = ft_strncmp(s1, s2, n);
	printf("%d \n", cmp);
	printf("%d \n", strncmp(s1, s2, n));
	return (0);
}
