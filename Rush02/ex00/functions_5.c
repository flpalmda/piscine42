/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 12:21:12 by rramos            #+#    #+#             */
/*   Updated: 2020/12/15 16:46:34 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	process_hundreds_digits(char *number, char *dictionary, int index,
			bool *space)
{
	char	*string;

	if (number[index] != '0')
	{
		string = convert_characters_to_string(number[index], '\0');
		convert_number_to_text(space, dictionary, string);
		free(string);
		convert_number_to_text(space, dictionary, "100");
	}
}

void	process_tens_digits(char *number, char *dictionary, int index,
			bool *space)
{
	char	*s;

	if (number[index] != '0')
	{
		if (number[index] == '1')
		{
			s = convert_characters_to_string(number[index],
				number[index + 1]);
			convert_number_to_text(space, dictionary, s);
			free(s);
		}
		else
		{
			s = convert_characters_to_string(number[index], number[index + 1]);
			if (find_number_in_dictionary(dictionary, s, space, true))
			{
				free(s);
				return ;
			}
			free(s);
			s = convert_characters_to_string(number[index], '0');
			convert_number_to_text(space, dictionary, s);
			free(s);
		}
	}
}

void	process_unit_digits(char *number, char *dictionary, int index,
			bool *space)
{
	char	*string;
	int		digits_count;

	digits_count = get_string_length(number);
	if ((index == 0 || number[index - 1] != '1') && number[index] != '0')
	{
		string = convert_characters_to_string(number[index - 1], number[index]);
		if (!find_number_in_dictionary(dictionary, string, space, false))
		{
			string = convert_characters_to_string(number[index], '\0');
			convert_number_to_text(space, dictionary, string);
		}
		free(string);
	}
	if (((index >= 2 && number[index - 2] != '0') || (index >= 1
		&& number[index - 1] != '0') || number[index] != '0')
		&& digits_count - index >= 4)
	{
		string = get_string_of_zeros(digits_count - index);
		convert_number_to_text(space, dictionary, string);
		free(string);
	}
}

void	print_words(char *number, char *dictionary)
{
	int		index;
	int		digits_count;
	int		digit;
	bool	space;

	space = false;
	if (find_number_in_dictionary(dictionary, number, &space, true))
		return ;
	index = 0;
	digits_count = get_string_length(number);
	while (index < digits_count)
	{
		digit = (digits_count - index - 1) % 3;
		if (digit == 2)
			process_hundreds_digits(number, dictionary, index, &space);
		else if (digit == 1)
			process_tens_digits(number, dictionary, index, &space);
		else if (digit == 0)
			process_unit_digits(number, dictionary, index, &space);
		index++;
	}
}
