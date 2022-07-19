/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sketsri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 21:42:48 by sketsri           #+#    #+#             */
/*   Updated: 2022/07/16 01:19:09 by sketsri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	rush(int x, int y);

int	ft_atoi(char *s)
{
	int	i;
	int	negative;
	int	result;

	i = 0;
	while (s[i] == ' ')
	{
		i++;
	}
	negative = 0;
	if (s[i] == '-')
	{
		negative = 1;
		i++;
	}
	result = 0;
	while ((s[i] >= '0') && (s[i] <= '9') && (s[i] != '\0'))
	{
		result *= 10;
		result += s[i] - '0';
		i++;
	}
	return ((1 - 2 * negative) * result);
}

void	ft_putnbr(int nbr)
{
	int		i;
	char	buffer[20];

	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr == 0)
		write(1, "0", 1);
	else
	{
		i = 0;
		while ((nbr > 0) && (i < 20))
		{
			buffer[i++] = (nbr % 10) + '0';
			nbr /= 10;
		}
		while (--i >= 0)
		{
			write(1, &buffer[i], 1);
		}
	}
}

void	print_info(int x, int y)
{
	write(1, "- - - - - - - - - - - - - - - - - \n", 35);
	ft_putnbr(x);
	write(1, ",", 1);
	ft_putnbr(y);
	write(1, "\n", 1);
}

void	rush_test(void)
{
	int	x;
	int	y;

	write(1, "Test Mode\n", 10);
	x = 0;
	while (x <= 5)
	{
		y = 0;
		while (y <= 5)
		{
			print_info(x, y);
			rush(x, y);
			y++;
		}
		x++;
	}
	print_info(123, 42);
	rush(123, 42);
	print_info(42, 123);
	rush(42, 123);
	print_info(1000, 1000);
	rush(1000, 1000);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc >= 3)
	{
		x = ft_atoi(argv[1]);
		y = ft_atoi(argv[2]);
		rush(x, y);
	}
	else
	{
		rush_test();
	}
	return (0);
}
