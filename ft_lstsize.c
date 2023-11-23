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

int	ft_lstsize(t_list *lst)
{
	t_list		*current;
	int			i;

	i = 0;
	current = lst;
	while (current)
	{
		i++; // Counts number of nodes
		current = current->next;
	}
	return (i);
}

/*
int main()
{
    t_list *list = NULL; // Crear una lista vacía

    t_list *node1 = ft_lstnew("Elemento 1");
    t_list *node2 = ft_lstnew("Elemento 2");
    t_list *node3 = ft_lstnew("Elemento 3");

    // Agregar los nodos a la lista, chatgpt dice que es normal ahcerlo asi para que el ultimo sea el primero
    node3->next = list;
    list = node3;
    node2->next = list;
    list = node2;
    node1->next = list;
    list = node1;

    printf("%d\n", ft_lstsize(list));

    free(node1);
    free(node2);
    free(node3);
    
    return 0;
}
*/
