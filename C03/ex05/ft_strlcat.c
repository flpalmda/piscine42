/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 20:27:19 by fiferrei          #+#    #+#             */
/*   Updated: 2020/12/06 17:41:18 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *c)
{
	unsigned int i;

	i = 0;
	while (c++)
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	sizedest;

	if (size == 0)
		return (ft_strlen(src));
	sizedest = 0;
	while (sizedest < size && dest[sizedest])
		sizedest++;
	c = 0;
	if (size > sizedest + 1)
	{
		while (src[c] != '\0' && (sizedest + c) < (size - 1))
		{
			dest[sizedest + c] = src[c];
			c++;
		}
		dest[sizedest + c] = '\0';
	}
	return (sizedest + ft_strlen(src));
}
