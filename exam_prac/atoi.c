#include <stdio.h>
int ft_atoi(char *str)
{
int result;
int sign;
result = 0;
sign = 1;
while (*str == ' ' || (*str >= 9 && *str <= 13))
	str++;
if (*str == '-')
	sign = -1;
if (*str == '-' || *str == '+')
	return (0);
while (*str >= '0' && *str <= '9')
{
	result = result * 10 + *str - '0';
	str++;
}
return (sign * result);
}


int main()
{
printf("123456: %d\n", ft_atoi("123456"));
printf("123Threee456789: %d\n", ft_atoi("   123Threee45678"));
printf("Hello World!: %d\n", ft_atoi("Hello World!"));
printf("-+--+42 BLAH!: %d\n", ft_atoi("-+--+42 BLAH!"));
printf("-42: %d\n", ft_atoi("-42"));
}
