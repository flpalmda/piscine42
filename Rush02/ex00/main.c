/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 12:21:12 by rramos            #+#    #+#             */
/*   Updated: 2020/12/15 16:04:25 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	char	*dictionary_file_name;
	char	*number;
	char	*dictionary;

	if (process_arguments(argc, argv, &dictionary_file_name, &number)
		|| get_dictionary(dictionary_file_name, &dictionary))
	{
		print_error();
		return (0);
	}
	if (check_dictionary(dictionary))
	{
		print_dictionary_error();
		return (0);
	}
	if (is_string_zero(number, dictionary))
		return (0);
	print_words(number, dictionary);
	write(1, "\n", 1);
	free(dictionary);
	return (0);
}
