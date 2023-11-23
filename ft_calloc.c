/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spascual <spascual@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/1 18:49:27 by spascual           #+#    #+#             */
/*   Updated: 2023/10/1 14:11:37 by spascual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = count * size;
	ptr = malloc(total_size);
	if (ptr != NULL)
		ft_memset(ptr, 0, total_size); // Inicialize memorie with 0
	return (ptr);
}

/*
int main ()
{
    size_t num_elements = 5;
    size_t element_size = sizeof(int);

    // Usar ft_calloc para reservar memoria para un arreglo de 5 enteros inicializados en cero
    int *arr = (int *)ft_calloc(num_elements, element_size);

    if (arr != NULL) {
        // Acceder a los elementos del arreglo
        for (size_t i = 0; i < num_elements; i++) {
            printf("arr[%zu] = %d\n", i, arr[i]);
        }

        // Liberar la memoria cuando ya no se necesite
        free(arr);
    } else {
        printf("No se pudo asignar memoria.\n");
    }

    return 0;
}
*/
