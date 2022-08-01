/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 01:05:01 by ktunchar          #+#    #+#             */
/*   Updated: 2022/08/01 01:05:04 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>
#include <math.h>

int	main(void)
{
	printf("Expect: 2^0 = %d\n", (int) pow(2, 0));
	printf("Result: 2^0 = %d\n", ft_recursive_power(2, 0));
	printf("Expect: 2^5 = %d\n", (int) pow(2, 5));
	printf("Result: 2^5 = %d\n", ft_recursive_power(2, 5));
	printf("Expect: -2^10 = %d\n", (int) pow(-2, 10));
	printf("Result: -2^10 = %d\n", ft_recursive_power(-2, 10));
	printf("Expect: -5^9 = %d\n", (int) pow(-5, 9));
	printf("Result: -5^9 = %d\n", ft_recursive_power(-5, 9));
	printf("Expect: 10^-1 = 0 [expect error]\n");
	printf("Result: 10^-1 = %d\n", ft_recursive_power(10, -1));
}*/
