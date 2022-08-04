#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strstrlen(int size, char **str)
{
	int	i;
	int	sum;

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


char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	char	*newstr;

	
	i = 0;
	newstr = malloc((ft_strstrlen(size,strs) + size) * sizeof (char));
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
}

/*int main(int argc, char **argv)
{
	char *strs[10];
	char *str;
	int	i;

	strs[0] = "abc";
	strs[1] = "def";
	strs[2] = "";
	strs[3] = "m";
	strs[4] = "badfsfsaf";

	i = 3;
	if (argc>1)
	{
		i = argv[1][0] - '0';
	}

	str = ft_strjoin(i,strs, " x ");
	printf("%s\n",str);
	free(str);
	return 0;
}*/
