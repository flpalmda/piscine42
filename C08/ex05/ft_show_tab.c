/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 23:30:16 by fiferrei          #+#    #+#             */
/*   Updated: 2020/12/15 20:47:49 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	c = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nbr)
{
	if (nb == -2147483648)
		ft_putstr("-2147483648");
	else if (nb < 0)
	{
		ft_putchar("-");
		ft_putnbr(nb * -1);
	}
	else
	{
		if (nb >= 10)
			ft_putnbr(nbr / 10);
		ft_putchar((nb % 10) + 48);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_purnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
