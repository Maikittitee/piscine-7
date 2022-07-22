int ch_negative(int negative)
{
	if (negative % 2 != 0)
		return(1);
	else
		return(0);
}

int ft_atoi(char *str)
{
	int	i;
	int	ngt;
	int	result;

	i = 0;
	ngt = 0;
	result = 0;
	while (str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '-')
	{
		ngt++;
		i++;
	}
	ngt = ch_negative(ngt);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = (result * 10) + (str[i] - '0');
		i++;

	}
	return ((1 - 2 * ngt) * result);
}
/*
int	main()
{
	printf("%d\n" ,ft_atoi("123"));
	printf("%d\n" ,ft_atoi("    abdsdsd -999"));
	printf("%d\n" ,ft_atoi("dsfdfdf1111"));
	printf("%d",ft_atoi("\t \n2147483647"));
}*/
