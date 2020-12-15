/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 13:11:46 by fiferrei          #+#    #+#             */
/*   Updated: 2020/12/10 20:02:42 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int		ft_str_cmp(char *c1, char *c2)
{
	int c;

	c = 0;
	while ((c1[c] == c2[c]) && (c1[c] != '\0' && c2[c] != '\0'))
		c++;
	return (c1[c] - c2[c]);
}

void	ft_print_params(int ac, char **av)
{
	int i;

	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		c;
	char	*temp;

	i = 1;
	if (argc >= 1)
	{
		while (i < argc - 1)
		{
			c = i + 1;
			if (ft_str_cmp(argv[i], argv[c]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[c];
				argv[c] = temp;
				i = 0;
			}
			i++;
		}
	}
	ft_print_params(argc, argv);
	return (0);
}
