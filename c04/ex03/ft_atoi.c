int non_int(char *str, int *ptr_i)
{
	int	i;
	int	ngt;
	ngt = 1;
	i = 0;


	while (str[i] <=  32)
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			ngt*=-1;
		i++;
	}
	*ptr_i = i;
	return(ngt);
}

int ft_atoi(char *str)
{
	int	i;
	int	ngt;
	int	result;

	result = 0;
	ngt = non_int(str,&i);
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10; 
		result += str[i] - 48;
		i++;
	}
	return (ngt * result);
}
/*
int	main()
{
	printf("%d\n" ,ft_atoi("123"));
	printf("%d\n" ,ft_atoi("    abdsdsd -999"));
	printf("%d\n" ,ft_atoi("dsfdfdf1111"));
	printf("%d",ft_atoi("\t \n2147483647"));
}*/
