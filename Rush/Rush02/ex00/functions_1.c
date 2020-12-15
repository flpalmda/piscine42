/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 12:21:12 by rramos            #+#    #+#             */
/*   Updated: 2020/12/15 16:18:46 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

bool	is_number(char *string)
{
	if (!*string)
		return (false);
	while (*string >= '0' && *string <= '9')
		string++;
	return (!*string);
}

bool	process_arguments(int argc, char **argv, char **dictionary_file_name,
			char **number)
{
	if (argc == 2)
	{
		*dictionary_file_name = "numbers.dict";
		*number = argv[1];
	}
	else if (argc == 3)
	{
		*dictionary_file_name = argv[1];
		*number = argv[2];
	}
	else
		return (true);
	if (!is_number(*number))
		return (true);
	return (false);
}

void	print_error(void)
{
	write(1, "Error\n", 6);
}

bool	get_file_size(char *file_name, int *file_size)
{
	int		file_descriptor;
	char	file_buffer[1 + 1];
	int		bytes_read;

	file_descriptor = open(file_name, O_RDONLY);
	if (file_descriptor == -1)
		return (true);
	*file_size = 0;
	while ((bytes_read = read(file_descriptor, file_buffer, 1)))
	{
		if (bytes_read == -1)
			return (true);
		(*file_size)++;
	}
	if (close(file_descriptor) == -1)
		return (true);
	return (false);
}

bool	get_dictionary(char *dictionary_file_name, char **dictionary)
{
	int		file_descriptor;
	int		bytes_read;
	int		file_size;

	if (get_file_size(dictionary_file_name, &file_size))
		return (true);
	file_descriptor = open(dictionary_file_name, O_RDONLY);
	if (file_descriptor == -1)
		return (true);
	*dictionary = malloc(file_size * sizeof(char) + 1);
	bytes_read = read(file_descriptor, *dictionary, file_size);
	if (bytes_read == -1)
		return (true);
	if (close(file_descriptor) == -1)
		return (true);
	return (false);
}
