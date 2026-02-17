# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/08 12:14:04 by mlaffita          #+#    #+#              #
#    Updated: 2026/02/08 19:00:03 by mlaffita         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Form
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I include/
SRCS = src/main.cpp src/Bureaucrat.cpp src/Form.cpp
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