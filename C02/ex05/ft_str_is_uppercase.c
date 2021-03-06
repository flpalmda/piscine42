/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 14:31:03 by fiferrei          #+#    #+#             */
/*   Updated: 2020/12/03 16:04:59 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int c;
	int m;

	c = 0;
	m = 0;
	while (str[c] != '\0')
	{
		if (str[c] > 64 && str[c] < 91)
			m++;
		c++;
	}
	if (c == m)
		return (1);
	else
		return (0);
}
