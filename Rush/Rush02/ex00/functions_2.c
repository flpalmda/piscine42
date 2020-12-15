/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 12:21:12 by rramos            #+#    #+#             */
/*   Updated: 2020/12/15 16:06:26 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print_dictionary_error(void)
{
	write(1, "Dict Error\n", 11);
}

int		get_string_length(char *string)
{
	int	index;

	index = 0;
	while (string[index])
		index++;
	return (index);
}

void	initialize_variables(bool *space, int *dictionary_index,
			int *number_index, bool *check_in_this_line)
{
	if (!*space)
		*space = true;
	else
		write(1, " ", 1);
	*dictionary_index = 0;
	*number_index = 0;
	*check_in_this_line = true;
}

bool	check_number_in_dictionary(char *dictionary, int *dictionary_index,
			int *number_index, bool *check_in_this_line)
{
	if (dictionary[*dictionary_index] == '\n')
	{
		(*dictionary_index)++;
		*number_index = 0;
		*check_in_this_line = true;
		return (true);
	}
	if (!*check_in_this_line)
	{
		(*dictionary_index)++;
		return (true);
	}
	return (false);
}

bool	verify_spaces_ahead_of_value(char *dictionary, int dictionary_index)
{
	while (dictionary[dictionary_index] != '\n'
		&& dictionary[dictionary_index] != '\0')
	{
		if (dictionary[dictionary_index] != ' ')
			return (true);
		dictionary_index++;
	}
	return (false);
}
