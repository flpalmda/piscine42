/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 20:03:17 by fiferrei          #+#    #+#             */
/*   Updated: 2020/12/10 14:14:45 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int				c;
	int				s;
	unsigned int	res;

	c = 0;
	while (str[c] == ' ' || str[c] == '\t' || str[c] == '\n' ||
			str[c] == '\v' || str[c] == '\f' || str[c] == '\r')
		c++;
	s = 1;
	while (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			s *= -1;
		c++;
	}
	res = 0;
	while (str[c] >= '0' && str[c] <= '9')
	{
		res = res * 10 + str[c] - '0';
		c++;
	}
	if (res)
		return (res * s);
	else
		return (0);
}
