#include<stdlib.h>
#include<stdio.h>

int	ft_is_sep(char src, char *sep)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (sep[i] == '\0')
		return (0);
	while (sep[i])
	{
		if (src == sep[i])
			return (1);
		i++;
	}
	return(0);

}

char **ft_split(char *str, char *charset)
{
	int	i;
	int	j;
	char	**buffer;
	while (str[i])
	{
		if (ft_is_sep(str[i],charset))
		{
			*buffer = (char *)malloc((i + 2) * sizeof(char));
			if (!buffer)
				return(0);
			while (j <= i)
			{
				*buffer[j] = str[j];
				j++;
			}
		}
		i++;
	}
	return (buffer);
}

int	main()
{
	char **str;
	str = ft_split("A,E,I,O,U",",");
	printf("%s\n",str[0]);
}
