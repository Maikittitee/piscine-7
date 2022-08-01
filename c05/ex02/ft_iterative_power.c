/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 01:04:27 by ktunchar          #+#    #+#             */
/*   Updated: 2022/08/01 22:59:50 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
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
#include <math.h>

int	main(void)
{
	printf("Expect: 2^0 = %d\n", (int) pow(2, 0));
	printf("Result: 2^0 = %d\n", ft_iterative_power(2, 0));
	printf("Expect: 2^5 = %d\n", (int) pow(2, 5));
	printf("Result: 2^5 = %d\n", ft_iterative_power(2, 5));
	printf("Expect: -2^10 = 1024\n");
	printf("Result: -2^10 = %d\n", ft_iterative_power(-2, 10));
	printf("Expect: -5^9 = -1953125\n");
	printf("Result: -5^9 = %d\n", ft_iterative_power(-5, 9));
	printf("Expect: 10^-1 = 0 [expect error]\n");
	printf("Result: 10^-1 = %d\n", ft_iterative_power(10, -1));
	return (0);
}
*/
