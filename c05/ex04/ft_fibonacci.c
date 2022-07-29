/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonaci.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 00:16:28 by ktunchar          #+#    #+#             */
/*   Updated: 2022/07/30 00:21:38 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index >= 0)
	{
		if (index == 0)
			return (0);
		if (index == 1)
			return (1);
		else if (index >= 2)
			return (ft_fibonacci(index - 1) + ft_fibonacci(index -2));
	}
	else
		return (-1);
}
/*
#include<stdio.h>

int	main(void)
{
	printf("Expect: fibo(0) = 0\n");
	printf("Result: fibo(0) = %d\n", ft_fibonacci(0));
	printf("Expect: fibo(1) = 1\n");
	printf("Result: fibo(1) = %d\n", ft_fibonacci(1));
	printf("Expect: fibo(2) = 1\n");
	printf("Result: fibo(2) = %d\n", ft_fibonacci(2));
	printf("Expect: fibo(3) = 2\n");
	printf("Result: fibo(3) = %d\n", ft_fibonacci(3));
	printf("Expect: fibo(10) = 55\n");
	printf("Result: fibo(10) = %d\n", ft_fibonacci(10));
	printf("Expect: fibo(-297) = -1 [expect error]\n");
	printf("Result: fibo(-297) = %d\n", ft_fibonacci(-297));
	return (0);
}
*/
