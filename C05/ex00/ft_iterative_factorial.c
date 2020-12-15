/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 18:37:58 by fiferrei          #+#    #+#             */
/*   Updated: 2020/12/09 17:31:11 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int c;

	c = nb - 1;
	if (nb == 0)
		return (1);
	else if (nb > 0)
	{
		while (c > 0)
		{
			nb *= c;
			c--;
		}
		return (nb);
	}
	else
		return (0);
}
