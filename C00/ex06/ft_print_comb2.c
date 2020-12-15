/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 19:38:27 by fiferrei          #+#    #+#             */
/*   Updated: 2020/11/29 19:50:19 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int c1;
	int c2;

	c1 = 0;
	c2 = 0;
	while (c1 < 100)
	{
		c2 = c1 + 1;
		while (c2 < 100)
		{
			ft_putchar(c1 / 10 + '0');
			ft_putchar(c1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(c2 / 10 + '0');
			ft_putchar(c2 % 10 + '0');
			if ((c1 / 10 != 9) || (c1 % 10 != 8))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			c2++;
		}
		c1++;
	}
}
