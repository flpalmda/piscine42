/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 12:44:27 by fiferrei          #+#    #+#             */
/*   Updated: 2020/11/29 21:10:24 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char n0, char n1, char n2)
{
	if (n2 > n1 && n1 > n0)
	{
		write(1, &n0, 1);
		write(1, &n1, 1);
		write(1, &n2, 1);
		if (n0 != '7')
			write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char n0;
	char n1;
	char n2;

	n0 = '0';
	while (n0 <= '7')
	{
		n1 = n0 + 1;
		while (n1 <= '8')
		{
			n2 = n1 + 1;
			while (n2 <= '9')
			{
				ft_print(n0, n1, n2);
				n2++;
			}
			n1++;
		}
		n0++;
	}
}
