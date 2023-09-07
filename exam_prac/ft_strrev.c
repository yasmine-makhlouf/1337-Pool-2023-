#include <stdio.h>

int	len(char *str)
{
	int count;

	count = 0;
	while(*str)
	{
		count++;
		str++;
	}
	return(count);
}

char    *ft_strrev(char *str)
{
	int i;
	char temp;
	int count;

	i = 0;
	count =	len(str);
	while(i < count)
	{
		temp = str[i];
		str[i] = str[count - 1];
		str[count - 1] = temp;
		i++;
		count--;
	}
	return (str);
}

int main (void)
{
	char str[] = "Hello";

	ft_strrev(str);
	printf("%s", str);
	return (0);
}
