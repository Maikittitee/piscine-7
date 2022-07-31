/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:53:03 by ktunchar          #+#    #+#             */
/*   Updated: 2022/07/31 16:51:15 by ktunchar         ###   ########.fr       */
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
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i += 1;
	}
}
/*
#include <stdio.h>

int     main(void)
{
    	printf("Expect result : abcdef\n");
    	printf("User   result : ");
	fflush(stdout);
	ft_putstr("abcdef");
	
	printf("\n");
    	return (0);
}
*/