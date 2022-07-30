/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:29:13 by ktunchar          #+#    #+#             */
/*   Updated: 2022/07/30 23:37:23 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int     main(void)
{
	char str[300];

	strcpy(str,"");
    	printf("Real   result : %s\n",strstr(str,""));
	strcpy(str,"");
    	printf("User   result : %s\n",ft_strstr(str,""));

	strcpy(str,"1234");
    	printf("Real   result : %s\n",strstr(str,"ABCdef"));
	strcpy(str,"1234");
    	printf("User   result : %s\n",ft_strstr(str,"ABCdef"));

	strcpy(str,"Best Test ");
    	printf("Real   result : %s\n",strstr(str," "));
	strcpy(str,"Best Test ");
    	printf("User   result : %s\n",ft_strstr(str," "));

	strcpy(str,"Test empty.");
    	printf("Real   result : %s\n",strstr(str,"empty. "));
	strcpy(str,"Test empty.");
    	printf("User   result : %s\n",ft_strstr(str,"empty. "));

	strcpy(str,"ABCd");
    	printf("Real   result : %s\n",strstr(str,"C"));
	strcpy(str,"ABCd");
    	printf("User   result : %s\n",ft_strstr(str,"C"));

    	return (0);
}*/
