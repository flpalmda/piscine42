/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 12:21:12 by rramos            #+#    #+#             */
/*   Updated: 2020/12/15 16:46:32 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

bool	print_number_text(char *dictionary, int *dictionary_index,
			bool *check_in_this_line)
{
	while (dictionary[*dictionary_index] == ' ')
		(*dictionary_index)++;
	if (dictionary[*dictionary_index] != ':')
	{
		*check_in_this_line = false;
		return (true);
	}
	(*dictionary_index)++;
	while (dictionary[*dictionary_index] == ' ')
		(*dictionary_index)++;
	while (dictionary[*dictionary_index] != '\n'
		&& dictionary[*dictionary_index] != '\0')
	{
		if (verify_spaces_ahead_of_value(dictionary, *dictionary_index))
			write(1, &dictionary[*dictionary_index], 1);
		(*dictionary_index)++;
	}
	return (false);
}

void	convert_number_to_text(bool *space, char *dictionary, char *number)
{
	int		dictionary_index;
	int		number_index;
	bool	check_in_this_line;

	initialize_variables(space, &dictionary_index, &number_index,
		&check_in_this_line);
	while (dictionary[dictionary_index])
	{
		if (check_number_in_dictionary(dictionary, &dictionary_index,
			&number_index, &check_in_this_line))
			continue;
		while (dictionary[dictionary_index] == number[number_index])
		{
			dictionary_index++;
			number_index++;
		}
		if (number[number_index] != '\0')
		{
			check_in_this_line = false;
			continue;
		}
		if (print_number_text(dictionary, &dictionary_index,
			&check_in_this_line))
			continue;
	}
}

bool	is_string_zero(char *string, char *dictionary)
{
	int		index;
	bool	space;

	index = 0;
	while (string[index])
	{
		if (string[index] != '0')
			return (false);
		index++;
	}
	space = false;
	convert_number_to_text(&space, dictionary, "0");
	write(1, "\n", 1);
	return (true);
}

char	*convert_characters_to_string(char character_1, char character_2)
{
	char	*string;

	if (character_2 == '\0')
	{
		string = malloc(1 * sizeof(char) + 1);
		string[0] = character_1;
		string[1] = '\0';
	}
	else
	{
		string = malloc(2 * sizeof(char) + 1);
		string[0] = character_1;
		string[1] = character_2;
		string[2] = '\0';
	}
	return (string);
}

bool	check_dictionary_line(char **dictionary)
{
	if (**dictionary < '0' || **dictionary > '9')
		return (true);
	while (**dictionary >= '0' && **dictionary <= '9')
		(*dictionary)++;
	while (**dictionary == ' ')
		(*dictionary)++;
	if (**dictionary != ':')
		return (true);
	(*dictionary)++;
	while (**dictionary == ' ')
		(*dictionary)++;
	if (**dictionary < ' ' || **dictionary > 126)
		return (true);
	while (**dictionary >= ' ' && **dictionary <= 126)
		(*dictionary)++;
	if (**dictionary != '\n' && **dictionary != '\0')
		return (true);
	return (false);
}
