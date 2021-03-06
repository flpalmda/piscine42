/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 23:43:56 by fiferrei          #+#    #+#             */
/*   Updated: 2020/12/03 16:03:08 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int c;
	int l;

	c = 0;
	l = 0;
	while (str[c] != '\0')
	{
		if ((str[c] > 64 && str[c] < 91) || (str[c] > 96 && str[c] < 123))
			l++;
		c++;
	}
	if (l == c)
		return (1);
	else
		return (0);
}
