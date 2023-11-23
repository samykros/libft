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

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = lst[0];
	*lst = new;
}

/*
int main ()
{
    t_list *list = NULL; // Crear una lista vacía
    
    t_list *node1 = ft_lstnew("Elemento 3");
    ft_lstadd_front(&list, node1);

    t_list *node2 = ft_lstnew("Elemento 2");
    ft_lstadd_front(&list, node2);
    
    t_list *node3 = ft_lstnew("Elemento 1");
    ft_lstadd_front(&list, node3);

    // Imprimir contenido de los nodos
    printf("%s\n", (char *)list->content); // Ahora 'list' apunta al nodo2
    printf("%s\n", (char *)list->next->content); // 'list->next' apunta al nodo1
    printf("%s\n", (char *)list->next->next->content);
    // printf("%s\n", (char *)list->next->next->next->content); // Este es el NULL
    
    free(node1);
    free(node2);
    free(node3);

    return 0;
}
*/
