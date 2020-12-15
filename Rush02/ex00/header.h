/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 21:43:19 by rramos            #+#    #+#             */
/*   Updated: 2020/12/15 15:19:58 by fiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <fcntl.h>
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

bool	is_number(char *string);
bool	process_arguments(int argc, char **argv, char **dictionary_file_name,
char **number);
void	print_error(void);
bool	get_file_size(char *file_name, int *file_size);
bool	get_dictionary(char *dictionary_file_name, char **dictionary);
void	print_dictionary_error(void);
int		get_string_length(char *string);
void	initialize_variables(bool *space, int *dictionary_index,
int *number_index, bool *check_in_this_line);
bool	check_number_in_dictionary(char *dictionary, int *dictionary_index,
int *number_index, bool *check_in_this_line);
bool	verify_spaces_ahead_of_value(char *dictionary, int dictionary_index);
bool	print_number_text(char *dictionary, int *dictionary_index,
bool *check_in_this_line);
void	convert_number_to_text(bool *space, char *dictionary, char *number);
bool	is_string_zero(char *string, char *dictionary);
char	*convert_characters_to_string(char character_1, char character_2);
bool	check_dictionary_line(char **dictionary);
bool	check_dictionary(char *dictionary);
char	*get_string_of_zeros(int number_of_digits);
bool	verify_spaces_ahead_of_value_pointer(char *dictionary);
bool	help_finding_number_in_dictionary(char **dictionary_copy,
char *number_copy, bool *space, bool write_text);
bool	find_number_in_dictionary(char *dictionary, char *number, bool *space,
bool write_text);
void	process_hundreds_digits(char *number, char *dictionary, int index,
bool *space);
void	process_tens_digits(char *number, char *dictionary, int index,
bool *space);
void	process_unit_digits(char *number, char *dictionary, int index,
bool *space);
void	print_words(char *number, char *dictionary);
#endif
