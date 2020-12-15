/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 10:23:24 by fiferrei          #+#    #+#             */
/*   Updated: 2020/12/09 13:05:32 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char *c)
{
	while (*c)
	{
		write(1, c, 1);
		c++;
	}
}

int		main(int argc, char **argv)
{
	if (argc)
	{
		ft_print_program_name(argv[0]);
		write(1, "\n", 1);
	}
	return (0);
}
