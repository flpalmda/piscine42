/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqtr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 01:57:57 by fiferrei          #+#    #+#             */
/*   Updated: 2020/12/10 22:01:35 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	math(int nb, int result, int estimate)
{
	if (result * result <= 2147483647 && result * result == nb)
		return (result);
	if (result == estimate)
		return (0);
	else
		return (math(nb, (result + (nb / result)) / 2, result));
}

int	ft_sqrt(int nb)
{
	if (nb == 1)
		return (1);
	if (nb < 4)
		return (0);
	return (math(nb, nb / 2, 2));
}
