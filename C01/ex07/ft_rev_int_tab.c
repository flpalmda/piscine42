/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 13:30:35 by fiferrei          #+#    #+#             */
/*   Updated: 2020/11/30 20:46:18 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int c;
	int temp;

	c = 0;
	while (c < size)
	{
		temp = tab[c];
		tab[c] = tab[size - 1];
		tab[size - 1] = temp;
		size--;
		c++;
	}
}
