/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sketsri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 01:19:39 by sketsri           #+#    #+#             */
/*   Updated: 2022/07/16 01:19:55 by sketsri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define N  '-'
#define E  '|'
#define W  '|'
#define S  '-'
#define NW 'o'
#define NE 'o'
#define SW 'o'
#define SE 'o'
#define CT ' '

void	ft_putchar(char c);

char	marker(int x, int y, int col, int row)
{
	char	c;

	if ((row == 0) && (col == 0))
			c = NW;
	else if ((row == 0) && (col > 0) && (col < x - 1))
			c = N;
	else if ((row == 0) && (col == x - 1))
			c = NE;
	else if ((row > 0) && (row < y - 1) && (col == 0))
			c = W;
	else if ((row > 0) && (row < y - 1) && (col > 0) && (col < x - 1))
			c = CT;
	else if ((row > 0) && (row < y - 1) && (col == x - 1))
			c = E;
	else if ((row == y - 1) && (col == 0))
			c = SW;
	else if ((row == y - 1) && (col > 0) && (col < x - 1))
			c = S;
	else if ((row == y - 1) && (col == x - 1))
			c = SE;
	return (c);
}

void	rush(int x, int y)
{
	int	col;
	int	row;

	if ((x > 0) && (y > 0))
	{
		row = 0;
		while (row < y)
		{
			col = 0;
			while (col < x)
			{
				ft_putchar(marker(x, y, col, row));
				col++;
			}
			ft_putchar('\n');
			row++;
		}
	}
}
