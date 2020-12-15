/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 13:11:46 by fiferrei          #+#    #+#             */
/*   Updated: 2020/11/28 16:10:28 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_rush_aux(int x, int y)
{
	int xc;
	int yl;

	yl = 1;
	while (yl <= y)
	{
		xc = 1;
		while (xc <= x)
		{
			if ((yl == 1 && xc == 1) || (yl == y && y > 1 && xc == x && x > 1))
				ft_putchar('/');
			else if ((yl == 1 && xc == x) || (yl == y && xc == 1))
				ft_putchar('\\');
			else if ((yl == 1 && xc < x) || (yl == y && xc < x))
				ft_putchar('*');
			else if ((yl < y && xc == 1) || (yl < y && xc == x))
				ft_putchar('*');
			else
				ft_putchar(' ');
			xc++;
		}
		yl++;
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		ft_putchar('\0');
	else
		ft_rush_aux(x, y);
}
