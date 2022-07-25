/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 22:39:01 by ktunchar          #+#    #+#             */
/*   Updated: 2022/07/25 23:48:42 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_is_negative(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	return (nbr);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		remainder;
	int		result;
	int		baselen;
	int		i;
	char	array[30];

	i = -1;
	baselen = ft_strlen(base);
	if (nbr == -2147483648)
	{
		ft_putnbr_base(-214748364,base);
		ft_putnbr_base(8,base);
	}
	else
	{
		nbr = ft_is_negative(nbr);
		while (nbr != 0)
		{
			i++;
			remainder = nbr % baselen;
			array[i] = base[remainder];
			nbr /= baselen;
		}
		while (i >= 0)
		{
			ft_putchar(array[i]);
			i--;
		}
	}
}	

int	main()
{
	ft_putnbr_base(-2147483648,"0123456789");
	ft_putchar('\n');
	ft_putnbr_base(1,"0123456789");
	//ft_putchar('\n');
	//ft_putnbr_base(-2147483648,"0123456789ABCDEF");
	//ft_putchar('\n');
	//ft_putnbr_base(-2147483648,"poneyvif");
	//ft_putchar('\n');
}
