
#include <stdlib.h>
#include <stdio.h>

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

char    *ft_strdup(char *src)
{
	char	*str;
	int	i;

	i = 0;
	str = (char *) malloc(ft_len(src) + 1);
	if (!str)
		return (0);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main (void)
{
	char	dest[] = "Hello";
	
	printf("%s",ft_strdup(dest));
	return (0);

}
