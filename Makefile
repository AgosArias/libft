# Nombre del archivo biblioteca
NAME = libft.a

# Compilador y flags de compilacion
CC = gcc
FLAGS = -Wall -Werror -Wextra

# Archivos fuente y archivos objeto
SRC = ft_isalpha.c
OBJ = $(SRC:.c=.o)

# Archivo de encabezado
INCLUDE = libft.h

# Crear biblioteca y eliminar archivos
AR = ar rcs
RM = rm -f

# Indica que las siguientes reglas no son archivos reales
.PHONY: all clean fclean re

# Regla que por defecto compila todo
all: $(NAME)

# Regla para crear la biblioteca
$(NAME): $(OBJ)
	$(AR) $@ $^

# Pasar archivos .c a .o
%.o: %.c $(INCLUDE)
	$(CC) $(FLAGS) -c -o $@ $<

# Regla para eliminar todos los archivos objetos creados
clean:
	$(RM) $(OBJ)

# Eliminar todos los archivos .o y .a
fclean:
	$(RM) $(NAME)

re: fclean all

e:
	echo $(OBJ)	
