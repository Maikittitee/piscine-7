/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:28:19 by ktunchar          #+#    #+#             */
/*   Updated: 2022/07/20 14:28:09 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr((-1 * 214748364));
		ft_putchar('8');
	}
	else if (nb == 2147483647)
	{
		ft_putchar('2');
		ft_putnbr(147483647);
	}
	else if (nb < 0)
	{	
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
	else if (nb <= 9)
		ft_putchar(nb + 48);
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
/*
int main()
{
	ft_putnbr(123);
}*/
