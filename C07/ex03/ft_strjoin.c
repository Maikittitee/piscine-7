#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strlen(char *str);

int	ft_strstrlen(int size, char **str)
{
	int	i;
	int j;
	int sum;

	i = 0;
	sum = 0;
	while (i < size)
	{
		sum += ft_strlen(str[i]);
		i++;
	}
	return (sum);
}

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

int ft_strlen(char *str)
{
    int i;

	i = 0;
	while (str[i])
		i++;
    return (i);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    int i;
    int j;
    char *newstr;


    newstr = malloc(ft_strstrlen(size,strs) + size);
    if (!newstr)
        return (0);
    while (i < size)
    {
        ft_strcat(newstr,strs[i]);
		if (i != size - 1)
			ft_strcat(newstr,sep);
		i++;
	}
	return (newstr);
}/
/*
int	main(void)
{
	int		index;
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "Hello";
	strs[1] = "friend ";
	strs[2] = "you are awesome";
	separator = ",";
	result = ft_strjoin(size, strs, separator);
	//printf("%d\n", ft_strstrlen(size,strs));
	printf("%s\n",result);
	free(result);
}
*/