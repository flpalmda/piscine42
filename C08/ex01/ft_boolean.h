/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 15:34:22 by fiferrei          #+#    #+#             */
/*   Updated: 2020/12/15 20:49:17 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef	int		t_bool;

# define TRUE		1
# define FALSE		0
# define SUCCESS	0

# define EVEN(x) (x % 2) == 0

# define EVEN_MSG	"I have an even number of arguments.\n"
# define ODD_MSG	"I have an odd number of arguments.\n"

#endif
