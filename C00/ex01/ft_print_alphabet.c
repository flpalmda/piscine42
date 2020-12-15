/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 21:04:47 by fiferrei          #+#    #+#             */
/*   Updated: 2020/11/29 17:07:10 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char l)
{
	write(1, &l, 1);
}

void	ft_print_alphabet(void)
{
	char l;

	l = 'a';
	while (l <= 'z')
	{
		ft_putchar(l);
		l++;
	}
}
