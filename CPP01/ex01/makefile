# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/08 23:30:02 by mlaffita          #+#    #+#              #
#    Updated: 2025/12/11 17:40:00 by mlaffita         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = moarBrainz
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I include/
SRCS = src/main.cpp src/Zombie.cpp src/zombieHorde.cpp
OBJDIR = obj
OBJS = $(SRCS:src/%.cpp=obj/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJDIR)/%.o: src/%.cpp | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -rf $(OBJDIR)
	
re: fclean all

.PHONY: all clean fclean re
