/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 19:41:13 by fiferrei          #+#    #+#             */
/*   Updated: 2020/12/13 11:26:32 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *ret;
	int c;

	if (min >= max)
		return (0);
	if (!(ret = malloc(sizeof(int) * (max - min))))
		return (0);
	c = 0;
	while (min < max)
	{
		ret[c] = min;
		min++;
		c++;
	}
	return (ret);
}
