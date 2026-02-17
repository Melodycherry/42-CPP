# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/08 12:14:04 by mlaffita          #+#    #+#              #
#    Updated: 2026/02/11 14:53:30 by mlaffita         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MultiForms
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I include/
SRCS = src/main.cpp src/Bureaucrat.cpp src/AForm.cpp src/PresidentialPardonForm.cpp src/RobotomyRequestForm.cpp src/ShrubberyCreationForm.cpp
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