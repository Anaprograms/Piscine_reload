# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ansuarez <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/23 17:03:51 by ansuarez          #+#    #+#              #
#    Updated: 2024/12/24 10:28:18 by ansuarez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = ft_display_file
SRC = ft_display_file.c

# Regla por defecto
all: $(NAME)

# Crear el binario
$(NAME): $(SRC)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

# Limpiar archivos objeto (.o)
clean:
	rm -f *.o

# Limpiar archivos objeto y binarios
fclean: clean
	rm -f $(NAME)

# Regla para recompilar el binario
re: fclean all


