#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 31) || (str[i] >= 127)) //0-31 127+
		{
			ft_putchar('\\');
			ft_putchar("0123456789ABCDEF"[str[i] / 16]);
			ft_putchar("0123456789ABCDEF"[str[i] % 16]);
		}
		else
			ft_putchar(str[i]);
		i++;
	} 
}

int main()
{
	char str[40]= "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	return (0);
}
