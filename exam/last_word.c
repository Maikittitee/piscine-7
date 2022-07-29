#include<stdio.h>
#include<unistd.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while(s[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i;
		char	*str;

		str = argv[1];
		i = ft_strlen(str);

		while (str[--i] == ' ' || str[--i] == '\t')

		while (i-- > 0)
		{
			if (str[i] == ' ' || str[i] == '\t')
				break;
		}
		while (str[i] > 32)
		{
			write(1,&str[i++],1);
		}
		write(1,"\n",1);
	}

	else
		printf("not 2 argument");
}
