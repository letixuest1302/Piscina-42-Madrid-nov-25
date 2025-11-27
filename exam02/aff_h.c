/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_h.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsainz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 10:48:21 by lsainz-d          #+#    #+#             */
/*   Updated: 2025/11/22 11:06:02 by lsainz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
    // 1. Verificar el número de argumentos.
    // Si es distinto de 2 (programa + string), el programa muestra "h\n" y termina.
    if (argc != 2)
    {
        write(1, "h\n", 2); // 1 es stdout, "h\n" son 2 bytes.
        return 0;
    }

    // Si el número de argumentos es correcto, procedemos a buscar la 'h'.
    char *str = argv[1];
    int i = 0;

    // 2. Recorrer el string para encontrar la primera 'h' (sin usar break).
    // El bucle se detiene cuando encuentra el fin de string ('\0') o la primera 'h'.
    while (str[i] != '\0' && str[i] != 'h')
    {
        i++;
    }
    
    // 3. Resultado.
    // Según las reglas:
    // - Si se encontró la primera 'h', se muestra "h\n".
    // - Si no se encontró ninguna 'h', se muestra "h\n".
    // Por lo tanto, la salida es la misma en ambos casos, así que la mostramos al final.
    write(1, "h\n", 2);

    return 0;
}


