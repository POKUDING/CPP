# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/22 13:24:08 by junhyupa          #+#    #+#              #
#    Updated: 2023/06/07 20:20:09 by junhyupa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := PhoneBook

CC := c++
CFLAGS := -Wall -Werror -Wextra -std=c++98

SRC := main.cpp PhoneBook.cpp Contact.cpp

OBJS := $(SRC:.cpp=.o)

all : $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

re : fclean all

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

.PHONY : all clean fclean re