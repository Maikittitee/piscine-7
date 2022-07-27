/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 20:44:09 by ktunchar          #+#    #+#             */
/*   Updated: 2022/07/25 14:40:18 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	check;

	str = ft_strlowcase(str);
	i = 0;
	check = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (check == 1)
				str[i] -= 32;
			check = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			check = 0;
		else
			check = 1;
		i++;
	}
	return (str);
}

int main()
{
	char str[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s \n",ft_strcapitalize(str));
}
