/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 21:38:15 by ktunchar          #+#    #+#             */
/*   Updated: 2022/07/25 22:31:18 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	s1;
	int	s2;
	int	count;

	s1 = 0;
	s2 = 0;
	count = 0;
	while (src[s2] != '\0')
		s2++;
	while (dest[s1] != '\0')
		s1++;
	while (count < nb)
	{
		dest[s1] = src[count];
		count++;
		s1++;
	}
	return (dest);
}
/*
int	main()
{
	char	dest[6] = "Hel";
	char	src[20] = "lo World";
	printf("%s",ft_strncat(dest,src,2));
}*/
