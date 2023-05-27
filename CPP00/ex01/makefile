# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/22 13:24:08 by junhyupa          #+#    #+#              #
#    Updated: 2023/05/22 13:47:28 by junhyupa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := PhoneBook

CC := g++
CFLAGS := -Wall -Werror -Wextra -std=c++98

SRC := megaphone.cpp

OBJS := $(SRC:.cpp=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) $(SRC) -c $< -o $@

re : fclean all

clean : $(OBJS)
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

.PHONY : all clean fclean re