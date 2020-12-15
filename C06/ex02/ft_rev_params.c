/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 11:41:40 by fiferrei          #+#    #+#             */
/*   Updated: 2020/12/08 14:35:42 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(char *av)
{
	int i;

	i = 0;
	while (av[i])
	{
		write(1, &av[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int c;

	c = argc - 1;
	if (c > 0)
	{
		while (c > 0)
		{
			ft_rev_params(argv[c]);
			c--;
		}
	}
	return (0);
}
