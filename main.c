
#include <stdio.h>
#include "libft.h"

int	main(void)
{    // Creamos un arreglo de 10 caracteres
    char buffer[10];

    // Llenamos el arreglo con el carácter 'A' (código ASCII 65)
    ft_memset(buffer, 'A', sizeof(buffer));

    // Agregamos un carácter nulo para imprimir como string
    buffer[9] = '\0';

    // Mostramos el contenido del buffer
    printf("Buffer después de memset: %s\n", buffer);

    // También podemos mostrar los valores en forma numérica
    printf("Valores ASCII:\n");
    for (int i = 0; i < 9; i++) {
        printf("%d ", buffer[i]);
    }
    printf("\n");
	return (0);
}
