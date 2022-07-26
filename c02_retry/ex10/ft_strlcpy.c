/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:28:04 by ktunchar          #+#    #+#             */
/*   Updated: 2022/07/25 14:40:33 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	src_size;

	src_size = 0;
	while (src[src_size] != '\0')
	{
		src_size++;
	}
	return (src_size);
}
/*
int main(void)
{
	char src[20] = "Hello";
	char dest[10];
	printf("%d", ft_strlcpy(dest, src, 10));
}*/
