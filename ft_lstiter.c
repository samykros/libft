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

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content); // Aply function to the content of the node
		lst = lst->next; // Move to next node in the list
	}
}

/*
// Función que imprime un entero
void print_int(void *content)
{
    int *ptr = (int *)content;
    printf("%d\n", *ptr);
}

int main()
{
    // Crear una lista con algunos valores de ejemplo
    int val1 = 42;
    int val2 = 73;

    t_list *list = ft_lstnew(&val1);
    if (!list)
    {
        perror("Error al crear la lista");
        return 1;
    }

    list->next = ft_lstnew(&val2);
    if (!list->next)
    {
        perror("Error al crear el segundo elemento de la lista");
        return 1;
    }

    // Utilizar ft_lstiter para imprimir los valores de la lista
    ft_lstiter(list, print_int);

    // Liberar la memoria de la lista (esto se debe hacer en una función más robusta)
    free(list->next);
    free(list);

    return 0;
}
*/
