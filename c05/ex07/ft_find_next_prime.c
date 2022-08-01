int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 8)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
/*
#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	printf("Expect: -3738 => 2\n");
	printf("Result: -3738 => %d\n", ft_find_next_prime(-3738));
	printf("Expect: 0 => 2\n");
	printf("Result: 0 => %d\n", ft_find_next_prime(0));
	printf("Expect: 1 => 2\n");
	printf("Result: 1 => %d\n", ft_find_next_prime(1));
	printf("Expect: 2 => 2\n");
	printf("Result: 2 => %d\n", ft_find_next_prime(2));
	printf("Expect: 13 => 13\n");
	printf("Result: 13 => %d\n", ft_find_next_prime(13));
	printf("Expect: 284 => 293\n");
	printf("Result: 284 => %d\n", ft_find_next_prime(284));
	printf("Expect: 2147483643 => 2147483647\n");
	printf("Result: 2147483643 => %d\n", ft_find_next_prime(2147483643));
	printf("Expect: 2147483647 => 2147483647\n");
	printf("Result: 2147483647 => %d\n", ft_find_next_prime(2147483647));
	return (0);
}

*/
