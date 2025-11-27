# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/24 18:23:33 by mlaffita          #+#    #+#              #
#    Updated: 2025/11/24 18:36:43 by mlaffita         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CC = c++ #CXX ? 
CFLAGS = -Wall -Wextra -Werror -std=c++98 # Pareil ici ? CXXFLAGS ? 
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
 
.PHONY: all clean fclean re