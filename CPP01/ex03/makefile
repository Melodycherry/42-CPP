# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/13 17:35:05 by mlaffita          #+#    #+#              #
#    Updated: 2025/12/13 21:02:07 by mlaffita         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = UnnecessaryViolence
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I include/
SRCS = src/main.cpp src/HumanA.cpp src/HumanB.cpp src/Weapon.cpp
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