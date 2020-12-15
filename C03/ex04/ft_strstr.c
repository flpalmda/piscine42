/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 19:47:01 by fiferrei          #+#    #+#             */
/*   Updated: 2020/12/05 20:26:57 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int c1;
	unsigned int c2;

	if (to_find[0] == '\0')
		return (str);
	c1 = 0;
	while (str[c1] != '\0')
	{
		c2 = 0;
		while (str[c1 + c2] != '\0' && str[c1 + c2] == to_find[c2])
		{
			if (to_find[c2 + 1] == '\0')
				return (&str[c1]);
			c2++;
		}
		c1++;
	}
	return (0);
}
