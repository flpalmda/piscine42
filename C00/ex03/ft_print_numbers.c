/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 22:27:12 by fiferrei          #+#    #+#             */
/*   Updated: 2020/11/29 19:42:16 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	write(1, &n, 1);
}

void	ft_print_numbers(void)
{
	int n;

	n = 48;
	while (n <= 57)
	{
		ft_putnbr(n);
		n++;
	}
}