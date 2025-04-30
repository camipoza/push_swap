# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/30 18:20:36 by cpoza-ra          #+#    #+#              #
#    Updated: 2025/04/30 18:46:16 by cpoza-ra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
CC = cc 
C_FLAGS = -Wall -Wextra -Werror
INCLUDE = -I. #directorio de cabeceras (dir actual)
SRC_FILES = 
OBJ_FILES = $(SRC_FILES:%.c=%.o)

LIBFT_DIR = lIBFT
LIBFT = lIBFT/libft.a


all: $(NAME)

$(NAME): $(LIBFT) $(OBJ_FILES) # para evitar relink, solo hace cambios en la lib si algun archivo .o ha cambiado
	ar rcs $(NAME) $(OBJ_FILES)

$(LIBFT): @make bonus -C $(LIBFT_DIR)

%.o: %.c #compilar archivos .c en .o
	$(CC) $(C_FLAGS) $(INCLUDE) -c $< -o $@
	
clean: #limpiar archivos .o
	rm -f $(OBJ_FILES)
	@make clean -C $(LIBFT_DIR)
	
fclean: #limpiar todo 
	rm -f $(NAME) $(OBJ_FILES)
	rm -f $(LIBFT)

re: fclean all #recompilar

.PHONY: all clean fclean re