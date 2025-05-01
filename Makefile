# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/30 18:20:36 by cpoza-ra          #+#    #+#              #
#    Updated: 2025/05/01 17:43:38 by cpoza-ra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc 
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I. #directorio de cabeceras (dir actual)
SRC_FILES = main.c parsing.c utils.c movements.c 
OBJ_FILES = $(SRC_FILES:%.c=%.o)

LIBFT_DIR = lIBFT
LIBFT = lIBFT/libft.a


all: $(NAME)

$(NAME): $(LIBFT) $(OBJ_FILES) # para evitar relink, solo hace cambios en la lib si algun archivo .o ha cambiado
	 	 $(CC) $(CFLAGS) $(OBJ_FILES) $(LIBFT) -o $(NAME)

$(LIBFT): 
		@make bonus -C $(LIBFT_DIR)

%.o: %.c #compilar archivos .c en .o
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@
	
clean: #limpiar archivos .o
	rm -f $(OBJ_FILES)
	@make clean -C $(LIBFT_DIR)
	
fclean: #limpiar todo 
	rm -f $(NAME) $(OBJ_FILES)
	rm -f $(LIBFT) 
	@make fclean -C $(LIBFT_DIR)

re: fclean all #recompilar

.PHONY: all clean fclean re