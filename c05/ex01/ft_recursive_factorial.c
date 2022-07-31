/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 01:02:11 by ktunchar          #+#    #+#             */
/*   Updated: 2022/08/01 01:39:12 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb >= 0)
	{
		if (nb == 1 || nb == 0)
			return (1);
		else if (nb != 1)
			return (nb * ft_recursive_factorial(nb - 1));
	}
	else
		return (0);
}
/*
int	main(void)
{
	printf("Expect: fact(0) = 1\n");
	printf("Result: fact(0) = %d\n", ft_recursive_factorial(0));
	printf("Expect: fact(1) = 1\n");
	printf("Result: fact(1) = %d\n", ft_recursive_factorial(1));
	printf("Expect: fact(2) = 2\n");
	printf("Result: fact(2) = %d\n", ft_recursive_factorial(2));
	printf("Expect: fact(5) = 120\n");
	printf("Result: fact(5) = %d\n", ft_recursive_factorial(5));
	printf("Expect: fact(10) = 3628800\n");
	printf("Result: fact(10) = %d\n", ft_recursive_factorial(10));
	printf("Expect: fact(20) = 0 [expect error]\n");
	printf("Result: fact(20) = %d\n", ft_recursive_factorial(20));
	printf("Expect: fact(-1) = 0 [expect error]\n");
	printf("Result: fact(-1) = %d\n", ft_recursive_factorial(-1));

	return(0);
}*/