#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return(i);
}

int	ft_is_negative(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	return (nbr);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int remainder;
	int result;
	int baselen;
	char array[40];
	int i;

	i = -1;
	baselen = ft_strlen(base);
	nbr = ft_is_negative(nbr);

	while (nbr != 0)
	{
		i++;
		remainder = nbr % baselen;
		array[i] = base[remainder];
		nbr /= baselen;
	}
	while (i >= 0)
	{
		ft_putchar(array[i]);
		i--;
	}
}
/*
int	main()
{
	ft_putnbr_base(-12,"0123456789");
	ft_putchar('\n');
	ft_putnbr_base(-12,"01");
	ft_putchar('\n');
	ft_putnbr_base(-12,"0123456789ABCDEF");
	ft_putchar('\n');
	ft_putnbr_base(-12,"poneyvif");
	ft_putchar('\n');
}*/
