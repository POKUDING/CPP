# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/22 13:24:08 by junhyupa          #+#    #+#              #
#    Updated: 2023/06/19 14:29:47 by junhyupa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := a.out

CXX := c++
CXXFLAGS := -Wall -Werror -Wextra -std=c++98

SRC := main.cpp ClapTrap.cpp ScavTrap.cpp

OBJS := $(SRC:.cpp=.o)

all : $(NAME)

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

re : 
	make fclean
	make all

clean :
	$(RM) -rf $(OBJS)

fclean :
	make clean
	$(RM) -rf $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

.PHONY : all clean fclean re