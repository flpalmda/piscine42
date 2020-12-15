/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 12:21:12 by rramos            #+#    #+#             */
/*   Updated: 2020/12/15 16:18:33 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

bool	check_dictionary(char *dictionary)
{
	while (*dictionary)
	{
		if (*dictionary == '\n')
		{
			dictionary++;
			continue;
		}
		if (check_dictionary_line(&dictionary))
			return (true);
	}
	return (false);
}

char	*get_string_of_zeros(int number_of_digits)
{
	char	*string_of_zeros;
	int		index;

	string_of_zeros = malloc(number_of_digits * sizeof(char) + 1);
	index = 0;
	string_of_zeros[index] = '1';
	index++;
	while (index < number_of_digits)
	{
		string_of_zeros[index] = '0';
		index++;
	}
	string_of_zeros[index] = '\0';
	return (string_of_zeros);
}

bool	verify_spaces_ahead_of_value_pointer(char *dictionary)
{
	char	*dictionary_copy;

	dictionary_copy = dictionary;
	while (*dictionary_copy != '\n' && *dictionary_copy != '\0')
	{
		if (*dictionary_copy != ' ')
			return (true);
		dictionary_copy++;
	}
	return (false);
}

bool	help_finding_number_in_dictionary(char **dictionary_copy,
			char *number_copy, bool *space, bool write_text)
{
	if ((**dictionary_copy == ' ' || **dictionary_copy == ':')
		&& *number_copy == '\0')
	{
		if (!write_text)
			return (true);
		while (**dictionary_copy == ' ')
			(*dictionary_copy)++;
		(*dictionary_copy)++;
		while (**dictionary_copy == ' ')
			(*dictionary_copy)++;
		if (*space)
			write(1, " ", 1);
		while (**dictionary_copy != '\n' && **dictionary_copy != '\0')
		{
			if ((verify_spaces_ahead_of_value_pointer(*dictionary_copy)))
				write(1, *dictionary_copy, 1);
			(*dictionary_copy)++;
		}
		return (true);
	}
	return (false);
}

bool	find_number_in_dictionary(char *dictionary, char *number,
			bool *space, bool write_text)
{
	char	*dictionary_copy;
	char	*number_copy;

	dictionary_copy = dictionary;
	while (*dictionary_copy)
	{
		number_copy = number;
		while (*dictionary_copy == *number_copy)
		{
			dictionary_copy++;
			number_copy++;
		}
		if (help_finding_number_in_dictionary(&dictionary_copy, number_copy,
			space, write_text))
			return (true);
		while (*dictionary_copy != '\n' && *dictionary_copy != '\0')
			dictionary_copy++;
		if (*dictionary_copy == '\0')
			break ;
		dictionary_copy++;
	}
	return (false);
}
