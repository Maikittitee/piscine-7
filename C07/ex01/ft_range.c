#include<stdlib.h>
#include<stdio.h>

int	*ft_range(int min, int max)
{
	int	*d;
	int i;
	int *nb;

	if (min >= max)
		return (NULL);
	d = (nb = malloc((max - min) * sizeof(int)));
	if (!d)
		return (NULL);
	i = 0;
	while (i < max - min)
	{
		nb[i] = i + min;
		i++;
	}

	return (nb);
}
/*
int	main()
{
	int	max;
	int	min;
	int *tab;
	int	size;
	int	i;


	min = 4;
	max = 1;
	size = max - min;
	i = 0;
	tab = ft_range(min, max);
	while (i < size)
	{
		printf("%d", tab[i++]);
	}
}
*/
