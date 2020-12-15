/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 10:38:19 by fiferrei          #+#    #+#             */
/*   Updated: 2020/12/09 13:06:58 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char *av)
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

	c = 1;
	while (c < argc)
	{
		ft_print_params(argv[c]);
		c++;
	}
	return (0);
}
