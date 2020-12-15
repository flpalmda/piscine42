/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 22:16:54 by fiferrei          #+#    #+#             */
/*   Updated: 2020/12/10 20:13:57 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

int		ft_base_check(char *base)
{
	int c;
	int c1;

	if (ft_strlen(base) < 2)
		return (0);
	c = 0;
	while (base[c] != '\0')
	{
		if (base[c] <= 31 || base[c] == '-' || base[c] == '+')
			return (0);
		c1 = c + 1;
		while (base[c1])
		{
			if (base[c] == base[c1])
				return (0);
			c1++;
		}
		c++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	baselen;

	if (!ft_base_check(base))
		return ;
	baselen = ft_strlen(base);
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar('-');
	}
	if (nbr < baselen)
		ft_putchar(base[nbr]);
	if (nbr >= baselen)
	{
		ft_putnbr_base(nbr / baselen, base);
		ft_putnbr_base(nbr % baselen, base);
	}
}
