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

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst); // Pointer to the last node
}

/*
int main()
{
    t_list *list = NULL; // Crear una lista vacía

    t_list *node1 = ft_lstnew("Elemento 1");
    t_list *node2 = ft_lstnew("Elemento 2");
    t_list *node3 = ft_lstnew("Elemento 3");
    
    node1->next = node2; // node1 apunta a node2
    node2->next = node3; // node2 apunta a node3
    node3->next = NULL;  // node3 es el último, por lo que apunta a NULL
    
    list = node1; // list apunta al inicio de la lista, que es node1

    t_list *lastNode = ft_lstlast(list);
    printf("%s\n", (char *)lastNode->content);

    free(node1);
    free(node2);
    free(node3);

    return 0;
}
*/
