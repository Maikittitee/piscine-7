/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:56:47 by ktunchar          #+#    #+#             */
/*   Updated: 2022/07/31 16:50:03 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int     main(void)
{
	int len = ft_strlen("0123456789");
	
    	printf("Expect result : 10\n");
    	printf("User   result : %d\n",len);
    	return (0);
}*/