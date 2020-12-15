# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rramos <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/13 16:21:08 by rramos            #+#    #+#              #
#    Updated: 2020/12/14 23:00:24 by fiferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCE_FILES = ./main.c ./functions_1.c ./functions_2.c ./functions_3.c ./functions_4.c ./functions_5.c
NAME = rush-02
DICTIONARY = "numbers.dict"
NUMBER = 999999999999999999999999999999999999999

$(NAME):
	/usr/bin/gcc -Wall -Wextra -Werror $(SOURCE_FILES) -o $(NAME)
	./$(NAME) $(DICTIONARY) $(NUMBER)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)
