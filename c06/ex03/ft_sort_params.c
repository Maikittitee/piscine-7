#include<unistd.h>
#include<stdio.h>

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i] <= '\0')
	{
		write(1, &str[i++], 1);
	}

}
int	main(int argc, char	**argv)
{
	char	temp;
	int		i;
	int		j;
	
	i = 0;
	j = 0;
	while (i < argc)
	{
		j = i + 1;
		while (argv[i] > argv[j])
		{
			temp = argv[0][i];
			argv[0][i] = argv[0][j];
			argv[0][j] = temp;
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
		printf("%s\n",argv[i++]);
/*
	i = 0;
	while(i <= argc)
	{
		ft_putstr(argv[0][i]);
		ft_putstr("\n");
		i++;
	}
*/
}
