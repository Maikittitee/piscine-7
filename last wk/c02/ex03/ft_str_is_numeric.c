/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:17:06 by ktunchar          #+#    #+#             */
/*   Updated: 2022/07/25 14:35:32 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			j++;
		i++;
	}
	if (i == j)
		return (1);
	else
		return (0);
}
/*
int	main()
{
	char *str1;
	char *str2;
	char *str3;

	str1 = "hey 123";
	str2 = "mai dai pen kon tee k ray";
	str3 = "12";
	printf("%d\n" ,ft_str_is_numeric(str1)); // 0
	printf("%d\n" ,ft_str_is_numeric(str2)); // 0
	printf("%d\n" ,ft_str_is_numeric(str3)); // 1
}*/
