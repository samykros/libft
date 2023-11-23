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

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	// Set the content for the new node
	new_node->content = content;
	// Initialize the next pointer to NULL
	new_node->next = NULL;
	return (new_node);
}

/*
int main ()
{
    // Aquí puedes usar la función ft_lstnew para crear nuevos nodos de lista
    // y agregar contenido a ellos, y luego organizarlos en una lista enlazada.
    // Por ejemplo:
    
    t_list *node1 = ft_lstnew("Elemento 1");
    t_list *node2 = ft_lstnew("Elemento 2");
    printf("%s\n", (char *)node1->content);
    printf("%s\n", (char *)node2->content);
    
    // Enlazar los nodos
    node1->next = node2;

    free(node1); // funciona igual sin free, pero es mejor ponerlo por memory leaks y eso
    free(node2);
    
    return 0;
}
*/
