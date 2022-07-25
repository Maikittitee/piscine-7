/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:18:20 by ktunchar          #+#    #+#             */
/*   Updated: 2022/07/25 21:31:02 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (src[j] != '\0')
		j++;
	while (dest[i] != '\0')
		i++;
	while (count <= j)
	{
		dest[i] = src[count];
		i++;
		count++;
	}
	return (dest);
}
/*
int	main()
{	
	char	dest[20] = "Hello ";
	char	src[20] = "World";
	
	printf("%s",ft_strcat(dest, src));
}*/
