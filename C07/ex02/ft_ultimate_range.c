/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 21:12:23 by fiferrei          #+#    #+#             */
/*   Updated: 2020/12/14 11:25:34 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *ret;
	int c;

	if (min >= max)
	{
		ret = NULL;
		return (0);
	}
	if (!(ret = malloc(sizeof(int) * (max - min))))
		return (-1);
	c = 0;
	while (min < max)
	{
		ret[c] = min;
		min++;
		c++;
	}
	*range = ret;
	return (c);
}
