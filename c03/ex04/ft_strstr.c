#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	while (str[i] != '\0')
		i++;
	return(i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		find_len;
	int		str_len;
	int		i;
	int		j;

	find_len = ft_strlen(to_find); //2
	str_len = ft_strlen(str); //12
	i = 0;
	j = 0;
	while (i < find_len+1) // i < 2 (i = 0 1 2)
	{
		if (to_find[i] == str[j] || to_find[i] == '\0') //"\0" == "l"
		{
			if (to_find[i] == '\0')
				return ("Ger");
			i++;
			j++;
		}
		else
		{
			if (str[j] == '\0')
				return ("Mai Ger");
			j++;
		}
	}
}

int	main()
{
	printf("%s",ft_strstr("Hello, World","le"));
}

