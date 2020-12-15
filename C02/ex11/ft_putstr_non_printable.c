/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 23:01:12 by fiferrei          #+#    #+#             */
/*   Updated: 2020/12/03 19:26:21 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_is_print(char c)
{
	if (c >= ' ' && c != 127)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int					i;
	char				*hx;
	unsigned	char	c;

	hx = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (ft_is_print(c))
			ft_putchar(c);
		else
		{
			ft_putchar('\\');
			ft_putchar(hx[c / 16]);
			ft_putchar(hx[c % 16]);
		}
		i++;
	}
}
