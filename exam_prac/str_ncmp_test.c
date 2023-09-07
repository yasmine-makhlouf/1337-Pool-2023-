#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]) && (i < n))
	{	
		i++;	
	}
	return (s1[i] - s2[i]);
}

int	 main(void)
{
	char	s1[] = "Be ;llo";
	char	s2[] = "Belli";
	unsigned int	n = 6;
	int	cmp;

	cmp = ft_strncmp(s1, s2, n);
	printf("%d \n", cmp);
	printf("%d \n", strncmp(s1, s2, n));
	return (0);
}
