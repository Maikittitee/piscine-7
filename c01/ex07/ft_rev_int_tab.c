/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:59:47 by ktunchar          #+#    #+#             */
/*   Updated: 2022/07/24 21:00:35 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i <= size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i += 1;
	}
}
/*
int	main()
{
	int ip[10]= {1,2,3};
	
	ft_rev_int_tab(ip,3);
	printf("%d %d %d",ip[0],ip[1],ip[2]);
}*/
