int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power <= 0)
		return (0);
	i = 1;
	result = 1;
	while (i <= power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
/*
#include<stdio.h>
int	main()
{
	printf("%d",ft_iterative_power(2,-3));
}*/
