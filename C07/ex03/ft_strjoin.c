/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 12:07:10 by fiferrei          #+#    #+#             */
/*   Updated: 2020/12/13 11:28:40 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

char	*ft_make_str(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * size - 1;
	if (size <= 0)
		len = 1;
	if (!(str = (char *)malloc(sizeof(char) * len)))
		return (0);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		c;
	int		i;
	int		k;
	char	*str;

	k = 0;
	c = -1;
	str = ft_make_str(size, strs, sep);
	while (++c < size)
	{
		i = 0;
		while (strs[c][i])
		{
			str[k++] = strs[c][i];
			i++;
		}
		i = 0;
		while (sep[i] && c != size - 1)
		{
			str[k++] = sep[i];
			i++;
		}
	}
	str[k] = '\0';
	return (str);
}
