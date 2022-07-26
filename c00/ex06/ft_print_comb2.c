/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:07:30 by ktunchar          #+#    #+#             */
/*   Updated: 2022/07/14 18:30:39 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a1;
	int	a2;

	a1 = 0;
	while (a1 <= 98)
	{
		a2 = a1;
		while (a2 <= 98)
		{	
			a2 += 1;
			ft_putchar ((a1 / 10) + '0');
			ft_putchar ((a1 % 10) + '0');
			ft_putchar (' ');
			ft_putchar ((a2 / 10) + '0');
			ft_putchar ((a2 % 10) + '0');
			if (!(a1 == 98))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		a1 += 1;
	}
}
