/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 15:53:54 by fiferrei          #+#    #+#             */
/*   Updated: 2020/12/06 00:04:28 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int c;

	c = 0;
	while (s1[c] == s2[c] && (unsigned char)s1[c] != '\0'
			&& (unsigned char)s2[c] != '\0' && c < n)
		c++;
	if (c == n)
		return (0);
	return ((unsigned char)(s1[c]) - (unsigned char)(s2[c]));
}
