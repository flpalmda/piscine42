/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 22:26:24 by fiferrei          #+#    #+#             */
/*   Updated: 2020/11/29 17:07:26 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char l)
{
	write(1, &l, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char l;

	l = 'z';
	while (l >= 'a')
	{
		ft_putchar(l);
		l--;
	}
}
