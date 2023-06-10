# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/22 13:24:08 by junhyupa          #+#    #+#              #
#    Updated: 2023/06/10 17:40:11 by junhyupa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := ex03

CC := c++
CFLAGS := -Wall -Werror -Wextra -std=c++98

SRC := main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJS := $(SRC:.cpp=.o)

all : $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

re : 
	make fclean
	make all

clean :
	rm -rf $(OBJS)

fclean :
	make clean
	rm -rf $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

.PHONY : all clean fclean re