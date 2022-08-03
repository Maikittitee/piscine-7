/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 16:14:05 by ktunchar          #+#    #+#             */
/*   Updated: 2022/08/03 16:55:32 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		*range = NULL;
		return (0);
	}
	diff = max - min;
	buffer = (int *) malloc((diff * sizeof(int)));
	
	if (buffer == NULL)
		return(-1);
	
	index = 0;
	while (index < diff)
	{
		buffer[index] = index + min;
		index++;
	}
	*range =  buffer;
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
