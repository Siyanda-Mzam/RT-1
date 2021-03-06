# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smamba <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/13 13:18:19 by smamba            #+#    #+#              #
#    Updated: 2016/08/08 12:52:00 by simzam           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.c \
	  vector/ft_vector.c \
	  vector/ft_vector_ops.c \
	  vector/ft_vector_arithmetic.c \
	  ft_color.c ft_objects.c ft_ray.c ft_stack.c \
	  window.c scene1.c utils.c\
	  engine/operations.c \
	  engine/shading_model.c \
	  engine/core.c \
	  engine/intersections.c \
	  engine/ft_normals.c

NAME = rtv1

CC = gcc

INC = -I /usr/include/X11

LIXLIB = -L/usr/lib/X11 -lmlx -lXext -lX11 -lm

MACLIB = -framework AppKit -framework OpenGL -lmlx -lm

VECTOR = -I. -I vector

all: $(NAME)

$(DEBUG): ARGS = -Wall -Werror -Wextra

$(NAME):
ifeq ($(shell) uname, Linux)
		@$(CC) $(ARGS) $(SRC) $(VECTOR) $(INC) $(LIXLIB) -o $(NAME)
else
		@$(CC) $(ARGS) $(SRC) $(VECTOR) $(INC) $(MACLIB) -o $(NAME)
endif
clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all
