/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 14:55:06 by fiferrei          #+#    #+#             */
/*   Updated: 2020/11/30 20:48:25 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int c;
	int i;
	int temp;

	c = 0;
	while (c < size - 1)
	{
		i = c + 1;
		while (i < size)
		{
			if (tab[i] < tab[c])
			{
				temp = tab[i];
				tab[i] = tab[c];
				tab[c] = temp;
			}
			i++;
		}
		c++;
	}
}
