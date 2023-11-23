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

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*start; // Temporary pointer to go through the list
	t_list	*temp; // Temporary pointer to store the node to be deleted

	if (!lst)
		return ;
	// Reference to the start of the list
	start = *lst;
	temp = NULL;
	while (start)
	{
		temp = start;
		// Move 'start' to the next node in the list
		start = start->next;
		// Call the 'del' function to free the memory of the current node's content
		del(temp->content);
		// Free memory, don't understand
		free(temp);
	}
	*lst = NULL;
}

/*
void del_function(void *content)
{
    free(content);
}

int main(void)
{
    t_list  *element;
    int     *value;

    value = (int*)malloc(sizeof(int));
    if (!value)
        return (1);
    *value = 42;

    element = ft_lstnew(value);
    if (!element)
    {
        free(value);
        return (1);
    }

    printf("Value before deletion: %d\n", *(int*)element->content);
    ft_lstclear(&element, del_function);
    // No intentes acceder a 'element' después de este punto, ya que ha sido liberado.

    return (0);
}
*/
