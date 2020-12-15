/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 09:14:19 by fiferrei          #+#    #+#             */
/*   Updated: 2020/12/10 20:58:01 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int c;

	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0)
		return (0);
	c = 3;
	while (c < (nb / 2))
	{
		if (nb % c == 0)
			return (0);
		c += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
