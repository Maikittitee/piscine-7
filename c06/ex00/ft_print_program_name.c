/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:30:51 by ktunchar          #+#    #+#             */
/*   Updated: 2022/08/03 15:09:15 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i++]);
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		ft_putstr(argv[0]);
		ft_putchar('\n');
		i++;
	}
}
