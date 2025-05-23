# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/30 18:20:36 by cpoza-ra          #+#    #+#              #
#    Updated: 2025/05/23 18:49:21 by cpoza-ra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc 
CFLAGS = -Wall -Wextra -Werror #-g3 -fsanitize=address
INCLUDE = -I. #directorio de cabeceras (dir actual)
SRC_FILES = main.c parsing.c utils.c movements_push.c movements_swap.c movements_rotate.c movements_rev_rotate.c order.c sort_utils.c 
OBJ_FILES = $(SRC_FILES:%.c=%.o)

LIBFT_DIR = LIBFT
LIB = $(LIBFT_DIR)/libft.a


all: $(NAME)

$(NAME): $(LIB) $(OBJ_FILES) # para evitar relink, solo hace cambios en la lib si algun archivo .o ha cambiado
	$(CC) $(CFLAGS) $(OBJ_FILES) $(LIB) -o $(NAME)

$(LIB):
	@make all -C $(LIBFT_DIR)
	@make bonus -C $(LIBFT_DIR)

%.o: %.c #compilar archivos .c en .o
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@
	
clean: #limpiar archivos .o
	rm -f $(OBJ_FILES)
	@make clean -C $(LIBFT_DIR)
	
fclean: #limpiar todo 
	rm -f $(NAME) $(OBJ_FILES)
	rm -f $(LIB) 
	@make fclean -C $(LIBFT_DIR)

re: fclean all #recompilar

.PHONY: all clean fclean re