
#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int	*arr;
	int	i;
	int size;

	i = 0;
	if (start < end)
	{
		size = end;
	}
	else
	{
		size = (start - end) + 1;
	}
	arr = (int *) malloc (sizeof(int) *  (size + 1));
	if (!arr)
		return (0);
	if (end > start)
	{
		while (i <= end)
			arr[i] = start;
			start++;
			i++;
	}
	if (start > end)
	{
		while(i <= start)
		{
			arr[i] = end;
			end++;
			i++;
		}
	}
	return (arr);
}
int main(void)
{
	int	start;
	int end;
	int i;
	int	size;
	int	*ptr;
	
	i = 0;
	start = 1;
	end = 5;	
	ptr = ft_range(start, end);
	size =  end - start;
	while (i < (size + 1))
	{
		//printf ("%d" ,ptr[i]);
		printf("%d", *(ft_range(start, end) + i));
		i++;
	}
	return (0);
}
