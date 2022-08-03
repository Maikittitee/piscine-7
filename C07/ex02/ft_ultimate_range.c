#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	index;
	int	*d;
	int	*buffer;
	int	diff;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	diff = max - min;
	d = (buffer = malloc((diff * sizeof(int))));
	printf("d = %d\n", *d);
	if (!d)
	{
		*range = 0;
		return(-1);
	}
	*range = buffer;
	index = 0;
	while (index < diff)
	{
		buffer[index] = index + min;
		index++;
	}
	return (diff);
}

int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}

}
