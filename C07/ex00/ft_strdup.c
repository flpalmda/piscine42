/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 13:43:58 by fiferrei          #+#    #+#             */
/*   Updated: 2020/12/13 11:26:14 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char		*ret;
	long int	c;

	c = 0;
	while (src[c] != '\0')
		c++;
	if (!(ret = malloc(sizeof(*src) * c + 1)))
		return (0);
	c = 0;
	while (src[c])
	{
		ret[c] = src[c];
		c++;
	}
	ret[c] = '\0';
	return (ret);
}
