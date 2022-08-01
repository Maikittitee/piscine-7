/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 01:07:09 by ktunchar          #+#    #+#             */
/*   Updated: 2022/08/01 01:07:11 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

long long	power2(long nb)
{
	return (nb * nb);
}

int	ft_sqrt(int nb)
{
	long long	i;

	i = 0;
	while (power2(i) <= nb)
	{
		if (power2(i) == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("Expect: sqrt(0) = 0\n");
	printf("Result: sqrt(0) = %d\n", ft_sqrt(0));
	printf("Expect: sqrt(1) = 1\n");
	printf("Result: sqrt(1) = %d\n", ft_sqrt(1));
	printf("Expect: sqrt(2) = 0\n");
	printf("Result: sqrt(2) = %d\n", ft_sqrt(2));
	printf("Expect: sqrt(100) = 10\n");
	printf("Result: sqrt(100) = %d\n", ft_sqrt(100));
	printf("Expect: sqrt(2147395600) = 46340\n");
	printf("Result: sqrt(2147395600) = %d\n", ft_sqrt(2147395600));
	printf("Expect: sqrt(-1) = 0 [expect error]\n");
	printf("Result: sqrt(-1) = %d\n", ft_sqrt(-1));
	printf("Expect: sqrt(13) = 0 [expect not found]\n");
	printf("Result: sqrt(13) = %d\n", ft_sqrt(13));
	printf("Expect: sqrt(934247393) = 0 [expect not found]\n");
	printf("Result: sqrt(934247393) = %d\n", ft_sqrt(934247393));
}
*/