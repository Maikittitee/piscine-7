/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:37:16 by ktunchar          #+#    #+#             */
/*   Updated: 2022/07/25 14:37:40 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= ' ' && str[i] <= '~'))
			j++;
		i++;
	}
	if (i == j)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	*str;
	char	*str2;

	str = "hello!";
	str2 = "\n";
	printf("%d\n", ft_str_is_printable(str));
	printf("%d\n", ft_str_is_printable(str2));
}*/
