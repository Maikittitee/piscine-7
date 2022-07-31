/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 21:42:23 by ktunchar          #+#    #+#             */
/*   Updated: 2022/08/01 01:37:11 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	count;

	count = nb;
	result = 1;
	if (nb >= 0)
	{
		while (count >= 1)
		{
			result *= count;
			count--;
		}
		return (result);
	}
	else
		return (0);
}
/*
int	main(void)
{
	printf("Expect: fact(0) = 1\n");
	printf("Result: fact(0) = %d\n", ft_iterative_factorial(0));
	printf("Expect: fact(1) = 1\n");
	printf("Result: fact(1) = %d\n", ft_iterative_factorial(1));
	printf("Expect: fact(2) = 2\n");
	printf("Result: fact(2) = %d\n", ft_iterative_factorial(2));
	printf("Expect: fact(5) = 120\n");
	printf("Result: fact(5) = %d\n", ft_iterative_factorial(5));
	printf("Expect: fact(10) = 3628800\n");
	printf("Result: fact(10) = %d\n", ft_iterative_factorial(10));
	printf("Expect: fact(20) = 0 [expect error]\n");
	printf("Result: fact(20) = %d\n", ft_iterative_factorial(20));
	printf("Expect: fact(-1) = 0 [expect error]\n");
	printf("Result: fact(-1) = %d\n", ft_iterative_factorial(-1));
}*/