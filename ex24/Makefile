# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/18 15:29:31 by rcorlett          #+#    #+#              #
#    Updated: 2024/10/18 15:29:42 by rcorlett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS_DIR = srcs
INCS_DIR = includes

# Source files
SRCS = $(SRCS_DIR)/ft_putchar.c \
       $(SRCS_DIR)/ft_putstr.c \
       $(SRCS_DIR)/ft_strcmp.c \
       $(SRCS_DIR)/ft_strlen.c \
       $(SRCS_DIR)/ft_swap.c

# Replace .c with .o
OBJS = $(SRCS:.c=.o)

CFLAGS = gcc -Wall -Wextra -Werror -I$(INCS_DIR)

# Create the library
all: $(NAME)

# Create the library with object files
$(NAME): $(OBJS)
	ar rcs $@ $^

# Create object files from source files
%.o: %.c
	$(CFLAGS) -c $< -o $@

# Clean object files
clean:
	rm -f $(OBJS)

# Clean object files and the library
fclean: clean
	rm -f $(NAME)

# Recompile
re: fclean all
