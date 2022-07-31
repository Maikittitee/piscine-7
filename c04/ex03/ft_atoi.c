/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:50:05 by ktunchar          #+#    #+#             */
/*   Updated: 2022/07/31 17:10:23 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	non_int(char *str, int *ptr_i)
{
	int	i;
	int	ngt;

	ngt = 1;
	i = 0;
	while (str[i] <= 32)
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			ngt *= -1;
		i++;
	}
	*ptr_i = i;
	return (ngt);
}

int	ft_atoi(char *str)
{
	int	i;
	int	ngt;
	int	result;

	result = 0;
	ngt = non_int(str, &i);
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10;
		result += str[i] - 48;
		i++;
	}
	return (ngt * result);
}
/*
int     main(void)
{
    printf("Expect result :\n"); 
	printf("-1234\n");
	printf("-2147483648\n");
	printf("-12345\n");
	printf("0\n");
	printf("0\n");
	printf("0\n");
	printf("123456789\n");
	printf("2147483647\n");

    printf("User   result :\n");
	printf("%d\n",ft_atoi(" ---+--+1234ab567"));
	printf("%d\n",ft_atoi(" \n\r\t\f\v -+-+-+--2147483648"));
	printf("%d\n",ft_atoi("-12345+2"));
	printf("%d\n",ft_atoi(""));
	printf("%d\n",ft_atoi("++- 123"));
	printf("%d\n",ft_atoi(" a123"));
	printf("%d\n",ft_atoi("\t--123456789a"));
	printf("%d\n",ft_atoi(" --++--2147483647")); 
    return (0);
} */
