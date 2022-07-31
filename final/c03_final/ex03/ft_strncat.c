/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 21:38:15 by ktunchar          #+#    #+#             */
/*   Updated: 2022/07/31 12:55:47 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				s1;
	unsigned int	count;

	s1 = 0;
	count = 0;
	while (dest[s1] != '\0')
		s1++;
	while (count < nb && src[count])
	{
		dest[s1] = src[count];
		count++;
		s1++;
	}
	dest[s1] = '\0';
	return (dest);
}

#include <string.h>

int     main(void)
{
	char str[300];

	strcpy(str,"1234");
    	printf("Real   result : %s\n",strncat(str,"ABCdef",0));
	strcpy(str,"1234");
    	printf("User   result : %s\n",ft_strncat(str,"ABCdef",0));

	strcpy(str,"Best Test ");
    	printf("Real   result : %s\n",strncat(str,"ABCdef",6));
	strcpy(str,"Best Test ");
    	printf("User   result : %s\n",ft_strncat(str,"ABCdef",6));

	strcpy(str,"Best Test ");
    	printf("Real   result : %s\n",strncat(str,"ABC",6));
	strcpy(str,"Best Test ");
    	printf("User   result : %s\n",ft_strncat(str,"ABC",6));

	strcpy(str,"Best Test ");
    	printf("Real   result : %s\n",strncat(str,"ABCdef",3));
	strcpy(str,"Best Test ");
    	printf("User   result : %s\n",ft_strncat(str,"ABCdef",3));

	strcpy(str,"Add empty.");
    	printf("Real   result : %s\n",strncat(str,"",3));
	strcpy(str,"Add empty.");
    	printf("User   result : %s\n",ft_strncat(str,"",3));

	strcpy(str,"");
    	printf("Real   result : %s\n",strncat(str,"",3));
	strcpy(str,"");
    	printf("User   result : %s\n",ft_strncat(str,"",3));

    	return (0);
}
