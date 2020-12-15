/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 21:58:02 by fiferrei          #+#    #+#             */
/*   Updated: 2020/12/15 20:24:52 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int					ft_strlen(char *str)
{
	int c;

	c = 0;
	while (*str)
		c++;
	return (c);
}

int					*ft_strdup(char *str)
{
	int		c;
	char	*ret;

	c = 0;
	while (str[c] != '\0')
		c++;
	if (!(ret = malloc(sizeof(char) * (c + 1))))
		return (0);
	c = 0;
	while (str[c] != '\0')
	{
		ret[c] = str[c];
		c++;
	}
	ret[c] = '\0';
	return (ret);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*ret;
	int			i;

	if (!(ret = (t_stock_str *)malloc(size(t_stock_str) * (ac + 1))))
	{
		ret = NULL;
		return (ret);
	}
	i = 0;
	while (*av[1] != '\0' && i < ac)
	{
		ret[i].size = ft_strlen(av[i]);
		ret[i].str = av[i];
		ret[i].copy = ft_strdup(av[i]);
		i++;
	}
	ret[i].size = 0;
	ret[i].str = 0;
	ret[i].copy = 0;
	return (ret);
}
