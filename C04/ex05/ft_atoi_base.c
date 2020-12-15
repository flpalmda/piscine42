/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base_.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 11:29:39 by fiferrei          #+#    #+#             */
/*   Updated: 2020/12/10 20:12:24 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_base(char *base)
{
	int	i;

	if (*base == 0 || *(base + 1) == 0)
		return (0);
	while (*base)
	{
		if (*base == '+' || *base == '-' || *base <= 31)
		{
			return (0);
		}
		i = 1;
		while (*(base + i))
		{
			if (*(base + i) == *base)
			{
				return (0);
			}
			i++;
		}
		base++;
	}
	return (1);
}

int		ft_strlen(char *str)
{
	int		c;

	c = 0;
	while (str[c] != 0)
		c++;
	return (c);
}

char	*in_base(char *base, char *to_find)
{
	int c;

	c = 0;
	while (base[c])
	{
		if (*to_find == base[c])
			return (base + c);
		c++;
	}
	return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	int		res;
	int		s;
	char	*string;

	string = str;
	s = 1;
	res = 0;
	if (ft_check_base(base))
	{
		while (*string == ' ' || (*string >= 9 && *string <= 13))
			string++;
		while (*string == '-' || *string == '+')
		{
			if (*string == '-')
				s *= -1;
			string++;
		}
		while (in_base(base, string))
		{
			res *= ft_strlen(base);
			res += (unsigned int)(in_base(base, string) - base);
			string++;
		}
	}
	return (int)(res * s);
}
